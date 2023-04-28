#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int count = 0; // number of items in buffer
int in = 0; // index of next free position in buffer
int out = 0; // index of next item to remove from buffer

sem_t mutex; // binary semaphore for mutual exclusion
sem_t full; // counting semaphore for number of full slots in buffer
sem_t empty; // counting semaphore for number of empty slots in buffer

void* producer(void* arg) {
    int item;
    while (1) {
        // produce an item
        item = rand() % 100; // generate a random item
        printf("Producer produced item %d.\n", item);

        // add item to buffer
        sem_wait(&empty); // wait for an empty slot
        sem_wait(&mutex); // enter critical section
        buffer[in] = item;
        in = (in + 1) % BUFFER_SIZE;
        count++;
        sem_post(&mutex); // leave critical section
        sem_post(&full); // signal that a slot is now full
    }
    return NULL;
}

void* consumer(void* arg) {
    int item;
    while (1) {
        // remove item from buffer
        sem_wait(&full); // wait for a full slot
        sem_wait(&mutex); // enter critical section
        item = buffer[out];
        out = (out + 1) % BUFFER_SIZE;
        count--;
        sem_post(&mutex); // leave critical section
        sem_post(&empty); // signal that a slot is now empty

        // consume the item
        printf("Consumer consumed item %d.\n", item);
    }
    return NULL;
}

int main() {
    pthread_t producer_thread, consumer_thread;

    // initialize semaphores
    sem_init(&mutex, 0, 1);
    sem_init(&full, 0, 0);
    sem_init(&empty, 0, BUFFER_SIZE);

    // create threads
    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);

    // wait for threads to finish (will never happen)
    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);

    // destroy semaphores
    sem_destroy(&mutex);
    sem_destroy(&full);
    sem_destroy(&empty);

    return 0;
}
