#include<stdio.h>
#include<string.h>


int max(int a, int b) {
    return (a > b) ? a : b;
}
void lcs ( char x[100], char y[100], int m, int n) {
    int len, i, j, l[100][100];
    char lc[100];

    for ( i = 0; i<=m; i++) {
        for ( j = 0; j<=n; j++) {
            if(i == 0 || j == 0) {
                l[i][j] = 0;
            } else {
                if (x[i-1] == y[j-1]){
                    l[i][j] = l[i-1][j-1] + 1;
                } else {
                    l[i][j] = max(l[i-1][j], l[i][j-1]);
                }
            }
        }
    }

    printf("Length of LCS is %d\n", l[m][n]);
    len = l[m][n];
    lc[len] = '\0';
    i = m; j = n;
    while ( i>0 && j > 0) {
        if (x[i-1] == y[j-1]) {
            lc[len - 1] = x[i-1];
            i--;
            j--;
            len--;
        } else {
            if (l[i-1][j]> l[i][j-1])  {
                i--;
            } else {
                j--;
            }
        }
    }
    printf("LCS is %s\n", lc);


}

int main() {
    char x[100], y[100];

    printf("Enter the first string: ");
    scanf("%s", x);
    printf("Enter the second string: ");
    scanf("%s", y);

    int m = strlen(x);
    int n = strlen(y);

    lcs (x, y, m, n);
    return 0;
}