/** Name: Janet Pham
 *  Date: 2022-07-12
 *  Title: Lab 3 Part 3 - Interprocess Communication - Pipes
 *  Description: This program demonstrates the use of pipes as an IPC mechanism
 *               and is use to develop multi-process multi-task application.
 * 				 The first process will duplicate downstream into stdin (grep command)
 *				 the second process will duplicate upstream (cat command).
 */

/* Sample C program for Lab Assignment 3 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/ipc.h>

//main
int main(int argc, char *argv[]){
        int fds[2];
        pipe(fds);


        if (fork() == 0) {
                //close downstream
                close(fds[0]);

                //duplicates to upstream
                dup2(fds[1], 1);

                //create the cat process with argument /etc/passwd
                execlp("cat", "cat", "/etc/passwd", NULL);
                exit(0);
        }

        //dupicate downstream of stdin
        else if (fork() == 0) {
                //closes upstream
                close(fds[1]);

                //duplicates to downstream
                dup2(fds[0], 0);

                //create grep process and receive input from upstream
                execlp("grep", "grep", "root" , NULL);
                exit(0);
        }
        else {
                //closes all upstream and downstream
                close(fds[0]);
                close(fds[1]);
                wait(0);
                wait(0);
        }
        return 0;
}
