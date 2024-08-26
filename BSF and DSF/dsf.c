#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

// Structure for representing a node in the adjacency list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Structure for representing a graph
typedef struct Graph {
    int numNodes;
    Node* adjLists[MAX_NODES];
} Graph;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with 'n' nodes
Graph* createGraph(int n) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numNodes = n;
    for (int i = 0; i < n; i++) {
        graph->adjLists[i] = NULL;
    }
    return graph;
}

// Function to add an edge to the graph
void addEdge(Graph* graph, int src, int dest) {
    Node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;
}

// Function for DFS traversal
void DFS(Graph* graph, int startNode, int visited[]) {
    visited[startNode] = 1;
    printf("%d ", startNode);

    Node* temp = graph->adjLists[startNode];
    while (temp != NULL) {
        int adjNode = temp->data;
        if (!visited[adjNode]) {
            DFS(graph, adjNode, visited);
        }
        temp = temp->next;
    }
}

int main() {
    int numNodes, numEdges;
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    Graph* graph = createGraph(numNodes);

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);
    
    printf("Enter the edges (source destination):\n");
    for (int i = 0; i < numEdges; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(graph, src, dest);
    }

    int startNode;
    printf("Enter the starting node for DFS: ");
    scanf("%d", &startNode);

    int visited[MAX_NODES] = {0};
    printf("DFS Traversal: ");
    DFS(graph, startNode, visited);

    return 0;
}
