# Suffix Rule
.SUFFIXES:
.SUFFIXES: .c .o
.c.o:
        gcc -c $*.c
#output files
lab2a.c: lab2a.o
        gcc lab2a.o - o lab2a

#headerfile dependencies
printf.o: stdio.h
pid_t.o: sys/types.h
fork.o: unistd.h
atoi.o: stdlib.h
errno.o: errno.h

#Removes o files and output file
clean:
        rm *.o lab2a
