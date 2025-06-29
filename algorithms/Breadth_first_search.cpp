#include<stdio.h>

void bfs (int n, int a[10][10], int sr, int s[10]) {
    int q[10], f = 1, r = 1, i, u;
    q[1] = sr;
    s[sr] = 1;

    while(f <= r) {
        u = q[f];
        f++;
        for ( i = 0; i<n; i++) {
            if(s[i] == 0 && a[u][i] == 1) {
                s[i] = 1;
                r++;
                q[r] = i;
                printf("%d\t", i);
            }
        }
    }
}

int main(){
    int n , a[10][10], source, s[10], i , j;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the source vertex: ");
    scanf("%d", &source);
    for(i=0;i<n;i++){
        s[i] = 0;
    }
    bfs(n, a, source, s);
    return 0;
}