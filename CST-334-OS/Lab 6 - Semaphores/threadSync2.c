
/*Name: Janet Pham
* Date: 2022-08 -02
* Title: Lab 6 - Semaphores
* Description: This program solves the consumer/producer using semaphores for
*              synchronization and locking.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define NTHREADS 26
#define BUFFER_SIZE 1

typedef struct {
    char value [BUFFER_SIZE];
    int In, Out;
} buffer_t;

//producer function
void* producer(void* arg);
//consumer function
void* consumer(void* arg);

pthread_t threadProducer;
pthread_t threadConsumer;
sem_t full, empty, mutex;
buffer_t buffer;


void* producer(void* arg) {
    int i;
    for(i = 0; i < NTHREADS; i++) {
        sem_wait(&empty);
        sem_wait(&mutex);
        char alpha = 'a' + (i % NTHREADS);
        buffer.value[buffer.In] = alpha;
        printf("Producer thread %ld :: %c >> buffer \n", pthread_self(), alpha);
        buffer.In = (buffer.In + 1) % BUFFER_SIZE;
        if (alpha == 'z') {
            printf("Producer thread %ld :: Ended.\n", pthread_self());
        };
        sem_post(&mutex);
        sem_post(&full);
    }
    return NULL;
}
void *consumer(void *arg) {
    int j;
    for(j = 0; j < NTHREADS; j++) {
		sem_wait(&full);
		sem_wait(&mutex);
		printf("Consumer thread %ld :: buffer << %c\n", pthread_self(), buffer.value[buffer.Out]);
		buffer.Out = (buffer.Out + 1) % BUFFER_SIZE;
		sem_post(&mutex);
		sem_post(&empty);
    }
    printf("Consumer thread %ld :: Ended\n", pthread_self());
    return NULL;
}

int main() {
	sem_init(&full,0,0);
    sem_init(&empty,0,BUFFER_SIZE);
    sem_init(&mutex,0,1);
	
    pthread_create(&threadProducer, NULL, (void *)producer, NULL);
    pthread_create(&threadConsumer, NULL,(void *)consumer, NULL);
	
    pthread_join(threadProducer, NULL);
    pthread_join(threadConsumer, NULL);
	
	sem_destroy(&mutex); //drop the semaphone when finished.
	sem_destroy(&full);
    sem_destroy(&empty);
	
    printf("Program Completed.\n");
    return 0;
}
