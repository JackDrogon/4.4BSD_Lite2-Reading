# This file was generated automatically by configure.  Do not edit.
VPATH = .
links = 
host_alias = m68k-hp-bsd
host_cpu = m68k
host_vendor = hp
host_os = bsd
host_canonical = m68k-hp-bsd
target_alias = m68k-hp-bsd
target_cpu = m68k
target_vendor = hp
target_os = bsd
target_canonical = m68k-hp-bsd
host_makefile_frag = ../../m68k-hp-bsd.mh
ALL=all.internal
# Copyright (C) 1989, 1992 Free Software Foundation, Inc.
# written by Douglas C. Schmidt (schmidt@ics.uci.edu)
# 
# This file is part of GNU GPERF.
# 
# GNU GPERF is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 1, or (at your option)
# any later version.
# 
# GNU GPERF is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with GNU GPERF; see the file COPYING.  If not, write to
# the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. 

srcdir = .

# Path up to the libg++ directory.
RELPATH = ..

CC = `if [ -f ../../../gcc/gcc ] ; \
	then echo ../../../gcc/gcc -B../../../gcc/ ; \
	else echo cc ; fi`
CXX = `if [ -f ../../../gcc/gcc ] ; \
	then echo ../../../gcc/gcc -B../../../gcc/ ; \
	else echo gcc ; fi`

CFLAGS = -g
CXXFLAGS = -g -O

#### host and target dependent Makefile fragments come in here.
INSTALL = install -c
INSTALL_DATA = install -c -m 644
# RANLIB = ranlib
# Use -nostdinc++ flag if your version of gcc understands it.
NOSTDINC = # -nostdinc++

# If the C include files are C++-ready (with extern "C"),
# define: HAVE_CPLUS_EXTERN = 1 and: WRAP_C_INCLUDES =
# If not, define HAVE_CPLUS_EXTERN = 0, and do not define WRAP_C_INCLUDES here.
HAVE_CPLUS_EXTERN = 0

# Flags to pass to gen-params when building _G_config.h.
# For example: G_CONFIG_ARGS = size_t="unsigned long"
G_CONFIG_ARGS =

GPERF = ../src/gperf

.PHONY: all
all:

.PHONY: check
check:
	@echo "performing some tests of the perfect hash generator"   
	$(CC) -c $(CFLAGS) $(srcdir)/test.c
	$(GPERF) -p -c -l -S1 -o $(srcdir)/c.gperf > cinset.c
	$(CC) $(CFLAGS) -o cout cinset.c test.o
	@echo "testing ANSI C reserved words, all items should be found in the set"
	./cout -v < $(srcdir)/c.gperf > output.c
	-diff -b $(srcdir)/expected.c output.c
	$(GPERF) -k1,4,'$$' $(srcdir)/ada.gperf > adainset.c
# double '$$' is only there since make gets confused; program wants only 1 '$'
	$(CC) $(CFLAGS) -o aout adainset.c test.o
	@echo "testing Ada reserved words,all items should be found in the set"
	./aout -v < $(srcdir)/ada.gperf > output.ada-res
	-diff -b $(srcdir)/expected.ada-res output.ada-res
	$(GPERF) -p -D -k1,'$$' -s 2 -o $(srcdir)/adadefs.gperf > preinset.c
	$(CC) $(CFLAGS) -o preout preinset.c test.o
	@echo "testing Ada predefined words, all items should be found in the set"
	./preout -v < $(srcdir)/adadefs.gperf > output.ada-pred
	-diff -b $(srcdir)/expected.ada-pred output.ada-pred
	$(GPERF) -k1,2,'$$' -o $(srcdir)/modula3.gperf > m3inset.c
	$(CC) $(CFLAGS) -o m3out m3inset.c test.o
	@echo "testing Modula3 reserved words, all items should be found in the set"
	./m3out -v < $(srcdir)/modula3.gperf > output.modula
	-diff -b $(srcdir)/expected.modula output.modula
	$(GPERF) -o -S2 -p < $(srcdir)/pascal.gperf > pinset.c
	$(CC) $(CFLAGS) -o pout pinset.c test.o
	@echo "testing Pascal reserved words, all items should be found in the set"
	./pout -v < $(srcdir)/pascal.gperf > output.pascal
	-diff -b $(srcdir)/expected.pascal output.pascal
# these next 5 are demos that show off the generated code
	$(GPERF) -p -j1 -g -o -t -N is_reserved_word -k1,3,'$$' < $(srcdir)/c-parse.gperf > test.out.1
	-diff -b $(srcdir)/expected.out.1 test.out.1
	$(GPERF) -n -k1-8 -l <$(srcdir)/modula2.gperf > test.out.2
	-diff -b $(srcdir)/expected.out.2 test.out.2
	$(GPERF) -p -j 1 -o -a -C -g -t -k1,4,$$ < $(srcdir)/gplus.gperf > test.out.3
	-diff -b $(srcdir)/expected.out.3 test.out.3
	$(GPERF) -D -p -t < $(srcdir)/c-parse.gperf > test.out.4
	-diff -b $(srcdir)/expected.out.4 test.out.4
	$(GPERF) -g -o -j1 -t -p -N is_reserved_word < $(srcdir)/gpc.gperf > test.out.5
	-diff -b $(srcdir)/expected.out.5 test.out.5
# prints out the help message
	-$(GPERF) -h > test.out.6 2>&1 || [ a = a ]
	-diff -b $(srcdir)/expected.out.6 test.out.6
	@echo "only if, do, for, case, goto, else, while, and return should be found "
	./aout -v < $(srcdir)/c.gperf > test.out.7
	-diff -b $(srcdir)/expected.out.7 test.out.7

.PHONY: mostlyclean clean distclean realclean
mostlyclean:
	rm -f *.o \#* core *inset.c output.* *out test.out.*
clean: mostlyclean
distclean: clean
	rm -f *~ Makefile config.status
realclean: distclean
	rm -f depend
