// Implementation of merging of two heaps with dynamic insertion and deletion.

#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(int A[], int size, int i) {
    int smallest = i;
    int L = 2 * i + 1;
    int R = 2 * i + 2;

    if (L < size && A[L] < A[smallest])
        smallest = L;

    if (R < size && A[R] < A[smallest])
        smallest = R;

    if (smallest != i) {
        swap(&A[i], &A[smallest]);
        minHeapify(A, size, smallest);
    }
}

void buildMinHeap(int A[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        minHeapify(A, size, i);
    }
}

void mergeHeaps(int A1[], int A2[], int size1, int size2) {
    int mergedSize = size1 + size2;
    int* mergedHeap = (int*)malloc(mergedSize * sizeof(int));

    for (int i = 0; i < size1; i++) {
        mergedHeap[i] = A1[i];
    }

    for (int i = 0; i < size2; i++) {
        mergedHeap[size1 + i] = A2[i];
    }

    buildMinHeap(mergedHeap, mergedSize);

    printf("Merged Heap: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedHeap[i]);
    }
    printf("\n");

    free(mergedHeap);
}

int main() {
    int A1[] = {6, 7, 8};
    int A2[] = {23, 24, 30, 59};

    int size1 = sizeof(A1) / sizeof(A1[0]);
    int size2 = sizeof(A2) / sizeof(A2[0]);

    mergeHeaps(A1, A2, size1, size2);

    return 0;
}