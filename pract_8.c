#include <stdio.h>

#define MAX 100

struct Edge {
    int u, v, weight;
};

int parent[MAX];

int find(int i) {
    while(parent[i] != i)
        i = parent[i];
    return i;
}

void unionSet(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

int main() {
    struct Edge edge[MAX], result[MAX];
    int n, e, i, j, u, v, w;
    int count = 0, total = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for(i = 0; i < e; i++) {
        printf("Enter edge %d (u v weight): ", i + 1);
        scanf("%d %d %d", &edge[i].u, &edge[i].v, &edge[i].weight);
    }

    for(i = 0; i < n; i++)
        parent[i] = i;

    for(i = 0; i < e - 1; i++) {
        for(j = 0; j < e - i - 1; j++) {
            if(edge[j].weight > edge[j + 1].weight) {
                struct Edge temp = edge[j];
                edge[j] = edge[j + 1];
                edge[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < e; i++) {
        u = edge[i].u;
        v = edge[i].v;
        if(find(u) != find(v)) {
            result[count++] = edge[i];
            total += edge[i].weight;
            unionSet(u, v);
        }
        if(count == n - 1)
            break;
    }

    printf("\nMinimum Spanning Tree:\n");
    for(i = 0; i < count; i++) {
        printf("%d - %d : %d\n", result[i].u, result[i].v, result[i].weight);
    }
    printf("Total weight: %d\n", total);

    return 0;
}
