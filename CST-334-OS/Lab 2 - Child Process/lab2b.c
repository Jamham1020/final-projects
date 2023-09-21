// # Name: Janet Pham
// # Date: July 5th, 2022
// # Title: Lab 2 - Task
// # Description: This program computes sample C program and develop programs with two or more processes using fork(), exit(),
//                exec() system calls. This is part 2 of Lab 2.

/* Sample C program for Lab 2 */
#include <stdio.h> /* printf, stderr */
#include <sys/types.h> /* pid_t */
#include <sys/wait.h> /* wait */
#include <unistd.h> /* fork */
#include <stdlib.h> /* atoi */
#include <errno.h> /* errno */
/* main function with command-line arguments to pass */
int main(int argc, char *argv[]){
 pid_t pid;
 int i, n = atoi(argv[1]); // n microseconds to input from keyboard for delay
 printf("\n Before forking.\n");
 pid = fork();
 if(pid == -1){
  fprintf(stderr, "can't fork, error %d\n", errno);
 }
 if(pid == 0){
  // Child Process
  execlp("/bin/ls", "ls", NULL);
}
else{
 // Parent Process
 wait(NULL);
 printf("Child Complete\n");
 exit(0);
}
return 0;
}
