#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX_THREADS 2
#define FILENAME "nikhil.txt"

pthread_mutex_t mutex;
FILE *file;

void *readFile(void *arg) {
    char buffer[256];
    while (1) {
        pthread_mutex_lock(&mutex);
        if (fgets(buffer, 256, file) == NULL) {
            pthread_mutex_unlock(&mutex);
            break;
        }
        printf("%s", buffer);
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

void *writeFile(void *arg) {
    int i;
    for (i = 0; i < 10; i++) {
        pthread_mutex_lock(&mutex);
        fprintf(file, "Line %d\n", i);
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main() {
    pthread_t threads[MAX_THREADS];

    file = fopen(nikhil.txt, "w+");
    if (file == NULL) {
        printf("Failed to open file\n");
        exit(1);
    }

    pthread_mutex_init(&mutex, NULL);

    pthread_create(&threads[0], NULL, readFile, NULL);
    pthread_create(&threads[1], NULL, writeFile, NULL);

    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);

    fclose(file);
    pthread_mutex_destroy(&mutex);

    return 0;
}