/*	$OpenBSD: spinlock.h,v 1.4 2013/06/01 20:47:40 tedu Exp $	*/

#ifndef _MACHINE_SPINLOCK_H_
#define _MACHINE_SPINLOCK_H_

#define _ATOMIC_LOCK_UNLOCKED	(1)
#define _ATOMIC_LOCK_LOCKED	(0)
typedef long _atomic_lock_t __attribute__((__aligned__(16)));

#endif
