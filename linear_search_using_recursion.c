//
// Created by priyanshu on 30/07/19.
//
/*
#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int arr[],int n,int element)
{
    if(n<1)
        return 0;
    else
    {
        LinearSearch(arr,n-1,element);
        if(arr[n-1] == element)
        {
            printf("%d is found at %d",element,n);
            exit(0);
        }
    }

    return 0;
}

int main(){
    int arr[5], pos, n,i, element;
    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to be searched:\n");
    scanf("%d", &element);

    pos = LinearSearch(arr, n, element);

    if (pos == 0)
        printf("404!!! Not found");

    return 0;
}
*/