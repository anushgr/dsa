#include<stdio.h>
#include<limits.h>


int matrix_chain_order(int p[], int i, int j) {
    int k, count, min = INT_MAX;
    if(i == j) {
        return 0; // No multiplication needed for a single matrix
    }

    for ( k =i; k<j; k++) {
        count = matrix_chain_order(p, i, k) + matrix_chain_order(p, k+1, j) + p[i-1] * p[k] * p[j];
        if(count < min) {
            min = count;
        }
    }
    return min;
}


    int main() {
    int a[10] ;
    printf("Enter the dimensions of matrices): ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);

    printf("minimum number of multiplications is %d\n", matrix_chain_order(a, 1, n-1));
}