#include <stdio.h>

#define MAX_VERTICES 5

// Function to initialize an adjacency matrix for a graph
void initializeGraph(int graph[MAX_VERTICES][MAX_VERTICES]) {
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            graph[i][j] = 0; // Initialize all elements to 0
        }
    }
}

// Function to add an edge between two vertices in the graph
void addEdge(int graph[MAX_VERTICES][MAX_VERTICES], int vertex1, int vertex2) {
    graph[vertex1][vertex2] = 1;
    graph[vertex2][vertex1] = 1;
}

// Function to print the adjacency matrix
void printGraph(int graph[MAX_VERTICES][MAX_VERTICES]) {
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int graph[MAX_VERTICES][MAX_VERTICES];
    initializeGraph(graph);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 3, 4);

    printf("Graph (Adjacency Matrix):\n");
    printGraph(graph);

    return 0;
}