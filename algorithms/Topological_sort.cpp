#include <stdio.h>

void topology(int n, int a[10][10], int sc[10]) {
    int i, j, count = 0;

    while (count < n) {
        int found = 0;
        for (i = 0; i < n; i++) {
            if (sc[i] == 0) {
                printf("%d ", i);
                sc[i] = -1; // Mark as visited
                for (j = 0; j < n; j++) {
                    if (a[i][j] != 0) {
                        sc[j]--; // Decrease in-degree
                    }
                }
                found = 1;
                count++;
                break; // Restart scan after one node is processed
            }
        }

        if (!found) {
            printf("\nCycle detected. Topological sort not possible.\n");
            return;
        }
    }
}

int main() {
    int n, i, j, a[10][10], sc[10];

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    // Initialize in-degree array
    for (i = 0; i < n; i++) {
        sc[i] = 0;
    }

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0) {
                sc[j]++; // count in-degree
            }
        }
    }

    printf("Topological Sort Order: ");
    topology(n, a, sc);
    return 0;
}
