// [bubble sort]
/*
#include <stdio.h>

int main()
{
    int a[10],i,n,p,temp;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for (i=0; i<n; ++i)
        scanf("%d",&a[i]);

    for (p = 0; p < (n-1); ++p)
        for (i= 0; i<(n-p-1); ++i)
        {
            if (a[i]> a[i+1])       //reverse the sign > to < for descending order
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    printf("Sorted array in ascending order is:\n");
    for (i=0; i<n; ++i)
        printf("%d ",a[i]);

    return 0;
}
*/