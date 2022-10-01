// [print upper triangular matrix]
/*
#include<stdio.h>

int main()
{
    int a[5][5],m,n,i,j;
    printf("Enter number of rows and columns of matrix:\n");
    scanf(" %d %d",&m,&n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
            scanf(" %d",&a[i][j]);
    }

    printf("Upper Triangular matrix:\n");

    for (i=0; i<m; ++i)
    {
        printf("\n");
        for (j = 0; j < n; ++j)
        {
            if (i <= j)
                printf("%d ",a[i][j]);
            else
                printf("0 ");
        }
    }

    return 0;
}
*/