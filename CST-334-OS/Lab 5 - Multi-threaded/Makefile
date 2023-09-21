.Suffixes:
.Suffixes: .c .o
.c.o:
	gcc -c $*.c
	
all: threadHello_step1 threadHelloFixed_step1_Fixed

threadHello_step1: threadHello_step1.c
	gcc -g -o threadHello_step1 threadHello_step1.c -Wall -pthread
	
threadHelloFixed_step1_Fixed: threadHelloFixed_step1_Fixed.c
	gcc -g -o threadHelloFixed_step1_Fixed threadHelloFixed_step1_Fixed.c -Wall -pthread

clean:
	rm threadHello_step1 threadHelloFixed_step1_Fixed
	

