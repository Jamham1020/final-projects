/** Name: Janet Pham
 *  Date: 2022-07-12
 *  Title: Lab 3 Part 1 - Interprocess Communication - Pipes
 *  Description: This program demonstrates the use of pipes as an IPC mechanism
 *               and is use to develop multi-process multi-task application.This code is
				 provided to the class as an example of how bash shell can run different commands
				 allowing the ouput produced by one process to be used as the input to the other process.
 */

/* Sample C program for Lab Assignment 3 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/ipc.h>

//main
int main(){
        int fds[2];
        pipe(fds);
        /* child 1 duplciates downstream into stdin */
        if (fork() == 0) {
                dup2(fds[0], 0);
                close(fds[1]);
                execlp("more", "more",(char *) 0);
        }
        /* child 2 duplicates upstream into stdout */
        else if (fork() == 0) {
                dup2(fds[1], 1);
                close(fds[0]);
                execlp("ls", "ls", (char *) 0);
        }
        else { //parent closes both ends and wait for children
                close(fds[0]);
                close(fds[1]);
                wait(0);
                wait(0);
        }
        return 0;
}
