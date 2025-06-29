#include<stdio.h>


void dfs ( int n , int a[10][10] , int sr, int s[10]) {
    printf("%d\t", sr);
    s[sr] = 1;

    for (int i = 0; i < n; i++) {
        if (s[i] == 0 && a[sr][i] == 1) {
            dfs(n, a, i, s);
            
        }
    }

}


int main() {
    int n , a[10][10], source, s[10], i, j;
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
    for(i=0;i<n;i++){
        s[i] = 0;
    }

    dfs ( n , a , source, s);
    return 0;
}