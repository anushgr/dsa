#include<stdio.h>

int parent[20] = {0}, min, mincost = 0, ne = 1 , n;
int cost[20][20], a,b,i,j,u,v;


void kruskal() {
    while(ne < n) {
        for (i = 1, min = 999; i<=n; i++) {
            for (j = 1; j <= n; j++) {
                if(cost[i][j] < min) {
                    a = u = i;
                    b = v = j;
                    min = cost[i][j];
                }
            }
        }
        while (parent[u]) u = parent[u];
        while (parent[v]) v = parent[v];

        if(u != v) {
            parent[v] = u;
            mincost += min;
            printf("Edge %d: (%d, %d) with cost %d\n", ne++, a, b, min);
        }

        cost[a][b] = cost[b][a] = 9999;
    }
    printf("Minimum cost of spanning tree: %d\n", mincost);
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the cost adjacency matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0) {
                cost[i][j] = 9999;
            }
        }
    }


    kruskal();

    return 0;
}