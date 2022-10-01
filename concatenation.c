// [concatenation of two arrays]

#include <stdio.h>

int main()
{
    int a[50],b[50],c[100],n,m,i,j,k;
    printf("Enter the no. of elements in first array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for (i=0;i<n;i++)
        scanf(" %d",&a[i]);

    printf("Enter the no. of elements in second array: ");
    scanf("%d",&m);
    printf("Enter elements:\n");
    for (j=0;j<m;j++)
        scanf(" %d",&b[j]);

    for (i=0;i<n;i++)
        c[i]=a[i];
    for (i=0,j=n;i<m,j<m+n;i++,j++)
        c[j]=b[i];
    for (i=0;i<m+n;i++)
        printf(" %d",c[i]);
    return 0;
}
