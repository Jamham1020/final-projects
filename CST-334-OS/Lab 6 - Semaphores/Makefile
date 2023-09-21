.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	gcc -c $*.c

all: threadSync threadSync2

threadSync: threadSync.c
	gcc -o executable threadSync.c -lpthread

threadSync2: threadSync2.c
	gcc -o executable threadSync2.c -lpthread 

clean:
	rm threadSync threadSync2