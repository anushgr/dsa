#include<stdio.h>

void dijkstra(int n, int a[10][10], int source) {
    int d[100], s[10], i, j, u, v, min;

    for ( i = 0; i < n; i++) {
        d[i] = 9999; 
        s[i] = 0;
    }

    d[source] = 0;
    s[source] = 1;
    for(i = 0; i < n; i++) {
        min  = 9999;
        u = -1;

        for( j = 0; j< n; j++) {
            if(s[j] == 0 && d[j]< min) {
                min = d[j];
                u = j;
            }
        }

        if (u == -1) {
            break; 
        }
        s[u] = 1;
        for (v=0; v<n; v++) {
            if(s[v] == 0 && a[u][v] != 0) {
                if(d[u] + a[u][v] < d[v]) {
                    d[v] = d[u] + a[u][v];
                }
            }
        }
    }

    for(i = 0; i < n; i++) {
        if(d[i] == 9999) {
            printf("Distance from source %d to vertex %d is not reachable\n", source, i);
        } else {
            printf("Distance from source %d to vertex %d is %d\n", source, i, d[i]);
        }
    }



}

int main() {
    int n , a[10][10], source, i, j;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the source vertex: ");
    scanf("%d", &source);

    dijkstra(n, a, source);
    return 0;
}