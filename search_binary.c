// [binary search]
/*
#include <stdio.h>

int main()
{
    int a[10], i, n, first, last, mid, search;
    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    printf("Enter element to find:\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    mid = (first + last) / 2;

    while (first <= last)
    {
        if (a[mid] < search)
            first = mid + 1;
        else if (a[mid] == search)
        {
            printf("%d found at location %d.\n",search,mid+1);
            break;
        }
        else
            last = mid - 1;

        mid = (first + last)/2;
    }
    if (first > last)
        printf("Element is not found in array.\n");

    return 0;
}
*/