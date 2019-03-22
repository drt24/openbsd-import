#!/bin/ksh
#	$OpenBSD: md5.sh,v 1.1 2019/02/20 22:17:14 benno Exp $

set -e

BGPD=$1
BGPDCONFIGDIR=$2
RDOMAIN1=$3
RDOMAIN2=$4
PAIR1=$5
PAIR2=$6

RDOMAINS="${RDOMAIN1} ${RDOMAIN2}"
PAIRS="${PAIR1} ${PAIR2}"
PAIR1IP=10.12.57.1
PAIR2IP=10.12.57.2

error_notify() {
	echo cleanup
	pkill -T ${RDOMAIN1} bgpd || true
	pkill -T ${RDOMAIN2} bgpd || true
	sleep 1
	ifconfig ${PAIR2} destroy || true
	ifconfig ${PAIR1} destroy || true
	route -qn -T ${RDOMAIN1} flush || true
	route -qn -T ${RDOMAIN2} flush || true
	ifconfig lo${RDOMAIN1} destroy || true
	ifconfig lo${RDOMAIN2} destroy || true
	if [ $1 -ne 0 ]; then
		echo FAILED
		exit 1
	else
		echo SUCCESS
	fi
}

trap 'error_notify $?' EXIT

echo check if rdomains are busy
for n in ${RDOMAINS}; do
	if /sbin/ifconfig | grep -v "^lo${n}:" | grep " rdomain ${n} "; then \
	    echo routing domain ${n} is already used >&2; exit 1; fi
done

echo check if interfaces are busy
for n in ${PAIRS}; do
	/sbin/ifconfig "${n}" >/dev/null 2>&1 && \
	    ( echo interface ${n} is already used >&2; exit 1 )
done

echo setup
ifconfig ${PAIR1} rdomain ${RDOMAIN1} ${PAIR1IP}/30 up
ifconfig ${PAIR2} rdomain ${RDOMAIN2} ${PAIR2IP}/30 up
ifconfig ${PAIR1} patch ${PAIR2}
ifconfig lo${RDOMAIN1} inet 127.0.0.1/8
ifconfig lo${RDOMAIN2} inet 127.0.0.1/8

echo run bgpds
route -T ${RDOMAIN1} exec ${BGPD} \
	-v -f ${BGPDCONFIGDIR}/bgpd.md5.rdomain1.conf
route -T ${RDOMAIN2} exec ${BGPD} \
	-v -f ${BGPDCONFIGDIR}/bgpd.md5.rdomain2.conf

sleep 3
echo debuging
route -T ${RDOMAIN1} exec bgpctl neigh RDOMAIN2 clear
route -T ${RDOMAIN2} exec bgpctl neigh RDOMAIN1 clear
sleep 20
tail -25 /var/log/daemon

echo test1
route -T ${RDOMAIN1} exec bgpctl sh sum | \
	awk '{ if ($1 ~ /^RDOMAIN2/) { f=1; print $7; 
		if ($7 == "0") { print "ok"; exit 0; }
		else { print "no session"; exit 1; } 
	}} END { if (f != 1) { print "bad bgpctl output"; exit 2; }}'

sleep 1

echo test2
route -T ${RDOMAIN2} exec bgpctl sh sum | \
	awk '{ if ($1 ~ /^RDOMAIN1/) { f=1; print $7; 
		if ($7 == "0") { print "ok"; exit 0; }
		else { print "no session"; exit 1; } 
	}} END { if (f != 1) { print "bad bgpctl output"; exit 2; }}'

sleep 1

exit 0