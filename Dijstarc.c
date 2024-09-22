#include <stdio.h>
#include <limits.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int distances[MAX_VERTICES];

void dijkstra(int source) {
    for (int i = 0; i < MAX_VERTICES; i++) {
        distances[i] = INT_MAX;
        visited[i] = 0;
    }

    distances[source] = 0;

    for (int i = 0; i < MAX_VERTICES - 1; i++) {
        int min_distance = INT_MAX;
        int u = -1;

        for (int j = 0; j < MAX_VERTICES; j++) {
            if (!visited[j] && distances[j] < min_distance) {
                min_distance = distances[j];
                u = j;
            }
        }

        visited[u] = 1;

        for (int v = 0; v < MAX_VERTICES; v++) {
            if (!visited[v] && graph[u][v] != 0 &&
                distances[u] + graph[u][v] < distances[v]) {
                distances[v] = distances[u] + graph[u][v];
            }
        }
    }
}

void add_edge(int u, int v, int weight) {
    graph[u][v] = weight;
    graph[v][u] = weight;
}

void print_distances(int source) {
    dijkstra(source);

    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < MAX_VERTICES; i++) {
        printf("%d \t\t %d\n", i, distances[i]);
    }
}

int main() {
    int num_vertices, num_edges;

    printf("Enter the number of vertices: ");
    scanf("%d", &num_vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &num_edges);

    printf("Enter the edges (u, v, weight):\n");
    for (int i = 0; i < num_edges; i++) {
        int u, v, weight;
        scanf("%d %d %d", &u, &v, &weight);
        add_edge(u, v, weight);
    }

    int source;
    printf("Enter the source vertex: ");
    scanf("%d", &source);

    print_distances(source);

    return 0;
}