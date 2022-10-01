// [to insert an element in array at any position]

#include <stdio.h>

void insert(int[], int);
void display(int[], int);
void main()
{
    int a[10],i,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    insert(a,n);
    display(a,n);
}
void insert(int a[],int n)
{
    int p,u,i;
    printf("Enter position at which you want to insert:\n");
    scanf("%d",&p);
    if (p==0)
        printf("Error: Entered position smaller than initial one.\n");
    else if (p>n)
    {
        printf("Error: Entered position greater than size of array.\n");
    }
    else
    {
        printf("Enter the value:\n");
        scanf("%d",&u);
        for (i=n-1;i>=p-1;i--)
            a[i+1]=a[i];
        a[p-1]=u;
    }
}
void display(int a[],int n)
{
    int i;
    printf("New array is:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}