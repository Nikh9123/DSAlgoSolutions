#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int sharedVariable = 0;
pthread_mutex_t mutex;

void *increment(void *arg) {
    pthread_mutex_lock(&mutex);
    sharedVariable += 3;
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}


void *decrement(void *arg) {
    pthread_mutex_lock(&mutex);
    sharedVariable -= 2;
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

int main() {
    pthread_t t1, t2;
    pthread_mutex_init(&mutex, NULL);

    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, decrement, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Shared variable value: %d\n", sharedVariable);

    pthread_mutex_destroy(&mutex);
    return 0;
}