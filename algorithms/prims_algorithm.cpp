#include <stdio.h>

void prims(int n , int a[10][10], int source) {
    int d[100], s[10], i, j, u, v, min, sum = 0;

    for (i =1; i<=n; i++) {
        d[i] = a[source][i]; 
        s[i] = 0;
    }
    s[source] = 1;

    for( i=1; i<n; i++ ) {
        min = 9999;
        for(j=1; j<=n; j++) {
            if( s[j] == 0 && d[j] < min) {
                min = d[j];
                u = j;
            }
        }
        s[u] = 1;
        sum += min;

        for(v=1; v<=n; v++) {
            if(s[v] == 0 && a[u][v] != 0) {
                if(d[v] > a[u][v]) {
                    d[v] = a[u][v];
                }
            }
        }

    }
    printf("Minimum cost of spanning tree: %d\n", sum);
}

int main() {
    int n , a[10][10], i, j;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the source vertex: ");
    int source;
    scanf("%d", &source);

    prims(n, a, source);
}