#include <stdio.h>
#include <string.h>

void horspool( char T[100], char P[100], int n, int m) {
    char ST[256];
    int i , j;

    for (i = 0; i < 256; i++) {
        ST[i] = m; 
    }

    for ( i = 0; i < m -1; i++) {
        ST[P[i]] = m - i - 1;
    }

    i = m - 1;
    while (i < n) {
        j = 0;
        while( j< m && T[i - j] == P[m - 1 - j]) {
            j++;
        }

        if(j == m) {
            printf("Pattern found at index %d\n", i - m + 1);
            return ;
        } else {
            i += ST[T[i]];
        }
    }
    printf("Pattern not found\n");


}

int main() {
    char f[100], p[100];
    printf("Enter the first string: ");
    scanf("%s", f);
    printf("Enter the second string: ");
    scanf("%s", p);

    horspool( f, p, strlen(f), strlen(p));
    return 0;
}