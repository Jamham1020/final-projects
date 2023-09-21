/** Name: Janet Pham
 *  Date: 2022-07-12
 *  Title: Lab 3 Part 2 - Interprocess Communication - Pipes
 *  Description: This program demonstrates the use of pipes as an IPC mechanism
 *               and is use to develop multi-process multi-task application. 
 *				 This code was provided to the class and like step1.c is used
 *				 to show how the bash shell can run different commands allowing 
 *				 the output produce by one process to be used as the input to the
 *               other process.
 */

/* Sample C program for Lab Assignment 3 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/ipc.h>

//main
int main (int argc, char *argv[]) {
        int fds[2];
        char buff[60];
        int count;
        int i;
        pipe(fds);


        if (fork() == 0) {
                printf("Writer on the upstream end of the pipe -> %d arguments \n", argc);
                close(fds[0]);
                for(i = 0; i < argc; i++) {
                        write(fds[1], argv[i], strlen(argv[i]));
                }
                exit(0);
        }


        else if (fork() == 0) {
                printf("\nReader on the downstream end of the pipe \n");
                close(fds[1]);
                while((count = read(fds[0], buff, 60)) > 0) {
                        for(i = 0; i < count; i++) {
                                write(1, buff + i, 1);
                                write(1, "", 1);
                        }
                        printf("\n");
                }
                exit(0);
        }
        else {
                close(fds[0]);
                close(fds[1]);
                wait(0);
                wait(0);
        }
        return 0;
}
