#       $Id$

SHELL= /bin/sh
SUBDIRS= libsmutil libsmdb sendmail mail.local mailstats makemap \
	 praliases rmail smrsh vacation
BUILD=   ./Build
OPTIONS= $(CONFIG) $(FLAGS)

all: FRC
	@for x in $(SUBDIRS); \
	do \
		(cd $$x; echo Making $@ in:; pwd; \
		$(SHELL) $(BUILD) $(OPTIONS)); \
	done

clean: FRC
	@for x in $(SUBDIRS); \
	do \
		(cd $$x; echo Making $@ in:; pwd; \
		$(SHELL) $(BUILD) $(OPTIONS) $@); \
	done

install: FRC
	@for x in $(SUBDIRS); \
	do \
		(cd $$x; echo Making $@ in:; pwd; \
		$(SHELL) $(BUILD) $(OPTIONS) $@); \
	done

fresh: FRC
	@for x in $(SUBDIRS); \
	do \
		(cd $$x; echo Making $@ in:; pwd; \
		$(SHELL) $(BUILD) $(OPTIONS) -c); \
	done

$(SUBDIRS): FRC
	@cd $@; pwd; \
	$(SHELL) $(BUILD) $(OPTIONS)

FRC:
