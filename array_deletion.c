// [to delete an element in an array]

#include <stdio.h>

int deletepos(int[], int);
void display(int[],int);
int main()
{
    int a[10],i,n;
    printf("Enter no. of elements in an array:\n");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(deletepos(a,n))
        n = n-1;
    display(a,n);
}

int deletepos(int b[], int m)
{
    int p,i;
    printf("Enter position which you want to delete:\n");
    scanf("%d",&p);
    if (p==0)
        printf("Error: Entered position smaller than initial one.\n");
    else if (p>m)
    {
        printf("Error: Entered position greater than size of array.\n");
    }
    else
    {
        for (i=p-1;i<(m-1);i++)
            b[i]=b[i+1];
        return 1;
    }
    return 0;
}

void display(int b[],int n)
{
    int i;
    printf("New array is:\n");
    for (i=0;i<n;i++)
        printf("%d\n",b[i]);
}
