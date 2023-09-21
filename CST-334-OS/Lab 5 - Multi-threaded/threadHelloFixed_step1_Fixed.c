/*
 * Name: Janet Pham
 * Date: 26 July 2022
 * Title: Lab 5 - threadHello_Step1_Fixed.c - Developing multi-threaded applciations
 * Description: This program fix the bug that was in threadHello_Step1_Fixed.c by
 *              working data in the heap rather than in stack.
 */



#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>



void *go(void *);
#define NTHREADS 10
pthread_t threads[NTHREADS];



int main() {
        int i;

        for (i = 0; i < NTHREADS; i++) {
                int *ptr = malloc(sizeof(int)); // creates a new variable to pass into each thread during each loop
                *ptr = i;
                pthread_create(&threads[i], NULL, go, ptr);
        }


        for (i = 0; i < NTHREADS; i++) {
                pthread_join(threads[i], NULL);
                printf("Thread %d returned\n", i);
        }

        printf("Main thread done.\n");
        return 0;

}



void *go(void *arg) {
        printf("Hello from thread %d with iteration %d\n", (int)pthread_self(), *(int *)arg);
        free(arg); // frees pointer memory
        return 0;
}
