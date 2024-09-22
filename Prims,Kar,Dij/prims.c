#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_NODES 100

typedef struct Node {
    int dest;
    int weight;
    struct Node* next;
} Node;

typedef struct Graph {
    int numNodes;
    Node* adjLists[MAX_NODES];
} Graph;

Node* createNode(int dest, int weight) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}

Graph* createGraph(int n) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numNodes = n;
    for (int i = 0; i < n; i++)
        graph->adjLists[i] = NULL;
    return graph;
}

void addEdge(Graph* graph, int src, int dest, int weight) {
    Node* newNode = createNode(dest, weight);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;
    
    newNode = createNode(src, weight);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

int minKey(int key[], int mstSet[], int numNodes) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < numNodes; v++)
        if (mstSet[v] == 0 && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}

void primMST(Graph* graph) {
    int parent[MAX_NODES], key[MAX_NODES], mstSet[MAX_NODES];

    for (int i = 0; i < graph->numNodes; i++)
        key[i] = INT_MAX, mstSet[i] = 0;

    key[0] = 0, parent[0] = -1;

    for (int count = 0; count < graph->numNodes - 1; count++) {
        int u = minKey(key, mstSet, graph->numNodes);
        mstSet[u] = 1;
        
        for (Node* temp = graph->adjLists[u]; temp != NULL; temp = temp->next) {
            int v = temp->dest, weight = temp->weight;
            if (mstSet[v] == 0 && weight < key[v])
                parent[v] = u, key[v] = weight;
        }
    }

    printf("Edge   Weight\n");
    for (int i = 1; i < graph->numNodes; i++)
        printf("%d - %d    %d \n", parent[i], i, key[i]);
}

int main() {
    int numNodes, numEdges;
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);
    Graph* graph = createGraph(numNodes);
    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);
    
    printf("Enter the edges and their weights (source destination weight):\n");
    for (int i = 0; i < numEdges; i++) {
        int src, dest, weight;
        scanf("%d %d %d", &src, &dest, &weight);
        addEdge(graph, src, dest, weight);
    }

    printf("Minimum Spanning Tree:\n");
    primMST(graph);

    return 0;
}
