//
// Created by priyanshu on 29/07/19.
//
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, num, temp, arr[20];
    printf("Enter size of array: ");
    scanf("%d", &num);

    printf("Enter %d elements in array: \n", num);
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=1; i<num; i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }

    printf("After Sorting : \n");
    for(i=0; i<num; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
*/