#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100
#define MAX_EDGES 100

typedef struct {
    int u, v, weight;
} Edge;

Edge edges[MAX_EDGES];
int num_edges;

int parent[MAX_VERTICES];

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (parent[v] != v) {
        parent[v] = find_set(parent[v]);
    }
    return parent[v];
}

void union_sets(int u, int v) {
    int root1 = find_set(u);
    int root2 = find_set(v);
    parent[root1] = root2;
}

void add_edge(int u, int v, int weight) {
    edges[num_edges].u = u;
    edges[num_edges].v = v;
    edges[num_edges].weight = weight;
    num_edges++;
}

void sort_edges() {
    int i, j;
    Edge temp;
    for (i = 1; i < num_edges; i++) {
        for (j = 0; j < num_edges - i; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

void kruskal(int num_vertices) {
    int i, u, v, weight, num_mst_edges = 0;
    sort_edges();
    for (i = 0; i < num_edges; i++) {
        u = edges[i].u;
        v = edges[i].v;
        weight = edges[i].weight;
        if (find_set(u) != find_set(v)) {
            union_sets(u, v);
            printf("%d %d %d\n", u, v, weight);
            num_mst_edges++;
            if (num_mst_edges == num_vertices - 1) {
                break;
            }
        }
    }
}

int main() {
    int num_vertices, num_edges, i, u, v, weight;
    printf("Enter the number of vertices: ");
    scanf("%d", &num_vertices);
    for (i = 0; i < num_vertices; i++) {
        make_set(i);
    }
    printf("Enter the number of edges: ");
    scanf("%d", &num_edges);
    for (i = 0; i < num_edges; i++) {
        printf("Enter edge %d (u v weight): ", i + 1);
        scanf("%d %d %d", &u, &v, &weight);
        add_edge(u, v, weight);
    }
    printf("Minimum spanning tree:\n");
    kruskal(num_vertices);
    return 0;
}