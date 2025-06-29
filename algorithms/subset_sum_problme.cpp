#include<stdio.h>

int s[10], x[10], d, flag = 0;

void sumofsub(int m, int k, int r) {
    int  i ;
    x[k] = 1;

    if((m+s[k]) == d) {
        printf ("{");
        for(i = 1; i<=k; i++) {
            if(x[i] == 1) {
                printf(" %d ", s[i]);
            }
        }
        printf("}\n");
        flag = 1;
    } else {
        if( k+1 <= 10 && (m+ s[k] + s[k+1] <=d))
        {
            sumofsub(m + s[k], k + 1, r - s[k]);
        }
        if (( m + r - s[k] >= d) && (k + 1 <= 10) && (m + s[k+1] <= d)) {
            x[k] = 0; // Exclude the current element
            sumofsub(m, k + 1, r - s[k]);
        }
    }
}

int main() {
    int i, n , sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in increasing order: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &s[i]);
        sum += s[i];
    }

    printf("Enter the desired sum: ");
    scanf("%d", &d);

    if (sum < d || s[1] > d) {
        printf("No solution exists.\n");
        return 0;
    }

    sumofsub(0, 1, sum);

    if (!flag) {
        printf("No solution exists.\n");
    }
}