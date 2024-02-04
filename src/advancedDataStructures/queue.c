#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

// Function to initialize a queue
void initializeQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

// Function to check if the queue is full
int isFull(struct Queue* queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

// Function to enqueue (insert) an item into the queue
void enqueue(struct Queue* queue, int value) {
    if (!isFull(queue)) {
        if (isEmpty(queue)) {
            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = value;
    } else {
        printf("Queue is full\n");
    }
}

// Function to dequeue (remove) an item from the queue
int dequeue(struct Queue* queue) {
    int item;
    if (!isEmpty(queue)) {
        item = queue->items[queue->front];
        if (queue->front == queue->rear) {
            queue->front = -1;
            queue->rear = -1;
        } else {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
        return item;
    } else {
        printf("Queue is empty\n");
        return -1; // Return a special value indicating underflow
    }
}

int main() {
    struct Queue myQueue;
    initializeQueue(&myQueue);

    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);
    enqueue(&myQueue, 3);

    printf("Dequeued: %d\n", dequeue(&myQueue));
    printf("Dequeued: %d\n", dequeue(&myQueue));

    return 0;
}
