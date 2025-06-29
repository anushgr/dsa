#include<stdio.h>
#include<math.h>

int place (int x[10], int k) {
    for(int i = 1; i < k; i++) {
        if(x[i] == x[k] || abs(x[i] - x[k]) == abs(i - k)) {
            return 0; // Not a valid position
        }
    }
    return 1; // Valid position
}

void nqueen(int n) {
    int x[10], k = 1, i , count = 0;
    x[k] = 0;
    while(k != 0) {
        x[k] = x[k] + 1;

        while( x[k] <= n && !place(x, k)) {
            x[k] = x[k] + 1;
        }
        if (x[k] <= n) {
            if ( k == n) {
                count++;
                printf("Solution %d: ", count);
                for(i = 1; i <= n; i++) {
                    printf("%d ", x[i]);
                }
                printf("\n");
            } else {
                k++;
                x[k] = 0;
            }

        } else {
            k--;
        }
    }
    if (count == 0) {
        printf("No solution exists for %d queens.\n", n);
    } else {
        printf("Total solutions for %d queens: %d\n", n, count);
    }
}

int main() {
    int n;
    printf("Enter the number of queens: ");
    scanf("%d", &n);

    if( n == 2 || n == 3) {
        printf("No solution exists for %d queens.\n", n);
    } else {
        nqueen(n);
    }
    return 0;
}