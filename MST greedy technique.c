#include <stdio.h>
#include <stdlib.h>
struct Edge {
    int src, dest, weight;
};
struct Subset {
    int parent, rank;
};
int compareEdges(const void* a, const void* b) {
    struct Edge* edge1 = (struct Edge*)a;
    struct Edge* edge2 = (struct Edge*)b;
    return edge1->weight - edge2->weight;
}
int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}
void Union(struct Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
void KruskalMST(struct Edge edge[], int V, int E) {
    struct Edge result[V];
    int e = 0;
    int i = 0;
    qsort(edge, E, sizeof(edge[0]), compareEdges);
    struct Subset* subsets = (struct Subset*)malloc(V * sizeof(struct Subset));
    for (i = 0; i < V; ++i) {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }

    i = 0;
    while (e < V - 1 && i < E) {
        struct Edge next_edge = edge[i++];

        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
        if (x != y) {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
    }
    printf("Following are the edges in the constructed MST\n");
    int minimumCost = 0;
    for (i = 0; i < e; ++i) {
        printf("%d -- %d == %d\n", result[i].src, result[i].dest, result[i].weight);
        minimumCost += result[i].weight;
    }

    printf("Minimum Cost Spanning Tree: %d\n", minimumCost);

    free(subsets);
}
int main() {
    int V = 4; 
    int E = 5;
    struct Edge edge[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    KruskalMST(edge, V, E);

    return 0;
}

