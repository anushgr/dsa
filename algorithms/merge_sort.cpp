#include<stdio.h>

void merge(int a[100], int low, int mid, int high) {
    int b[100], i, j, k;
    i = low;
    j = mid + 1;
    k = low; 
    while(i<= mid && j <= high) {
        if(a[i] <= a[j]) {
            b[k] = a[i];
        } else {
            b[k] = a[j];
        }
        k++;
    }
    while(i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }
    while(j <= high) {
        b[k] = a[j];
        j++;
        k++;
    }

    for(i = low; i <= high; i++) {
        a[i] = b[i];
    }
}

 void mergesort ( int a[100], int low, int high) {
    int mid;
    if (low<high) {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
 }

int main() {
    int n , a[100], i ;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    mergesort(a, 0, n - 1);
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}