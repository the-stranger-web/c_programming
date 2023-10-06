// Implementation of Max Heap using Array:

#include <stdio.h>

void maxHeapify(int a[], int n, int i){
    int P = i;
    int L = 2 * i + 1;
    int R = 2 * i + 2;

    if (L < n && a[L] > a[P])
        P = L;

    if (R < n && a[R] > a[P])
        P = R;

    if (P != i) {
        int temp = a[i];
        a[i] = a[P];
        a[P] = temp;
        maxHeapify(a, n, P);
    }
}

void buildHeap(int a[], int n){
    for (int i = n/2 -1 ; i >= 0; i--)
    maxHeapify(a, n, i);
}

int main() {
    int a[] = {23, 43, 1, 4, 12, 23, 70, 20, 16, 47};
    int n = sizeof(a)/sizeof(a[0]);
    
    buildHeap (a, n);
    
    for(int i=0; i<=n ; i++){
        printf("%d ", a[i]);
    }

    return 0;
}