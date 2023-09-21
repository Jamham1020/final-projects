# Suffix Rule
.SUFFIXES:
.SUFFIXES: .c .o
.c.o:
        gcc -c $*.c
#output files
lab2b: lab2b.o
        gcc lab2b.o - o lab2b

#headerfile dependencies
printf.o: stdio.h
pid_t.o: sys/types.h
wait.o: sys/wait.h
fork.o: unistd.h
atoi.o: stdlib.h
errno.o: errno.h

#Removes o files and output file
clean:
        rm *.o lab2b
