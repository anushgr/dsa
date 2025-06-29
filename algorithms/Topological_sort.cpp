#include <stdio.h>


void topology (int n, int a[10][10], int sc[10]) {
    int i, j;

    for(i =1; i<=n; i++) {
        if(sc[i] == 0) {
            printf("%d\t", i);
            sc[i] = -1;
            for(j=1; j<=n; j++) {
                if(a[i][j] != 0) {
                    sc[j]--;
                }
                i = 0;
            }
        }
    }
}
int main() {

    int n, i, j, a[10][10], sc[10];

    

    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        sc[i] = 0; // Initialize the visited array
    }
    printf("Enter the adjacency matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] != 0) {
                sc[j]++;
            }
        }
    }

    printf("Topological Sort Order: ");
    topology(n, a, sc);
    return 0;

}