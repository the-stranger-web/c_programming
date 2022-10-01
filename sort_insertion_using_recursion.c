//
// Created by priyanshu on 12/08/19.
//

#include <stdio.h>

int InsertionSort(int arr[], int n){
    int temp, i, j;
    if (n==1)
        return 1;
    else {
        for (i=1; i<n; i++){
             temp = arr[i];
             j = i-1;
             while ((j >= 0) && (temp < arr[j])){
                 arr[j+1] = arr[j];
                 j--;
             }
             arr[j+1] = temp;
        }
    }
    return 0;
}

int main(){
    int arr[10], i, n;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++)
        scanf("%d", &arr[i]);

    InsertionSort(arr, n);

    printf("Sorted array is:\t");
    for (i=0; i<n; i++)
        printf("%d\t", arr[i]);
    return 0;
}
