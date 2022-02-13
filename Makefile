CC=ccache clang
CFLAGS=-std=c17
OPTI=-O3 -Os
CWARNS=-Wall -Werror

# uncomment this to suppress additional warnings (do NOT do this for a release)
#CWARNS=


help:
	# Options are;
	#   help:      Display this information
	#   test:      Compile an executable application ment to test the library.
	#                  This is only really meant for me. Feel free to add your own tests
	#                  in src/main.c
	#   debug:     Compile debug libraries  (No optimizations, debuggable symbols, etc)
	#                  Use when you're developing software.
	#   release:   Compile release libraries  (Optimizations to the max, no debuggable symbols)
	#                  Use this when you're ready to create a final binary.
	#   valgrind:  Run test application under valgrind to look for memory errors/leaks.
	#
	# This software is licensed under the MPLv2; see LICENSE for details on how you can use it.
	# See COPYRIGHT for, well, copyrights


# Compile & run test application (src/main.c).
test:
	$(CC) $(CFLAGS) $(CWARNS) -g src/main.c -o bin/test -Llib/ -lcolours
	bin/test


# Use this for creating release libraries...
release:
	$(CC) $(CFLAGS) $(CWARNS) $(OPTI) -c src/colours.c
	mv *.o obj/
	ar rcs lib/libcolours.a obj/colours.o


# ...and debug libraries
debug:
	$(CC) $(CFLAGS) $(CWARNS) -g -c src/colours.c
	mv *.o obj/
	ar rcs lib/libcolours.a obj/colours.o


# Run the test application under valgrind to test memory.
valgrind:
	valgrind bin/test
