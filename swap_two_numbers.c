#include <stdio.h>

/*
// [swapping two numbers by call by value]

void swap(int, int);
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    swap(a,b);
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Value after swapping:\n%d %d",x,y);
}
*/



// [swapping two numbers by call by reference]

void swap(int *, int *);
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Value after swapping:\n%d %d",*x,*y);
}

