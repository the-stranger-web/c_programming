//
// Created by priyanshu on 05/08/19.
//
/*
#include <stdio.h>
#include <stdlib.h>

int MergeSort(int arr[], int i, int j);
int merge(int arr[],int i1,int j1,int i2,int j2);

int main()
{
    int arr[30],n,i;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    MergeSort(arr, 0, n - 1);

    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}

int MergeSort(int arr[], int i, int j)
{
    int mid;

    if(i<j)
    {
        mid=(i+j)/2;
        MergeSort(arr, i, mid);       // Left Recursion
        MergeSort(arr, mid + 1, j);     // Right Recursion
        merge(arr,i,mid,mid+1,j);   // Merging the two parts
    }

    return 0;
}

int merge(int arr[],int i1,int j1,int i2,int j2)
            // i1 and j1 are the starting and ending indices of one part and similarly i2 and j2 are of second part.
{
    int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }

    while(i<=j1)
        temp[k++]=arr[i++];

    while(j<=j2)
        temp[k++]=arr[j++];

    for(i=i1,j=0;i<=j2;i++,j++)
        arr[i]=temp[j];

    return 0;
}
*/