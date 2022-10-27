#include <stdio.h>

void swap_by_value(int, int);
void swap__by_reference(int *, int *);

void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    swap_by_value(a,b);
    swap__by_reference(&a,&b);
}

void swap_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Value after swapping:\n%d %d",x,y);
}

void swap__by_reference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Value after swapping:\n%d %d",*x,*y);
}
