#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 2

// To run, use: gcc multithreading.c -o multithreading -pthread

// Shared data
int counter = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Function to increment the counter
void* increment(void* arg) {
    for (int i = 0; i < 5; i++) {
        pthread_mutex_lock(&mutex); // Lock the mutex before accessing the shared resource
        counter++;
        printf("Incremented: %d\n", counter);
        pthread_mutex_unlock(&mutex); // Unlock the mutex after modifying the shared resource
    }
    pthread_exit(NULL);
}

// Function to decrement the counter
void* decrement(void* arg) {
    for (int i = 0; i < 5; i++) {
        pthread_mutex_lock(&mutex);
        counter--;
        printf("Decremented: %d\n", counter);
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];

    // Create two threads, one for incrementing and one for decrementing
    if (pthread_create(&threads[0], NULL, increment, NULL) != 0) {
        perror("Error creating thread 1");
        exit(EXIT_FAILURE);
    }

    if (pthread_create(&threads[1], NULL, decrement, NULL) != 0) {
        perror("Error creating thread 2");
        exit(EXIT_FAILURE);
    }

    // Wait for both threads to finish
    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Error joining thread");
            exit(EXIT_FAILURE);
        }
    }

    printf("Final Counter Value: %d\n", counter);

    return 0;
}
