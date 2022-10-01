// [multiply two matrices]
/*
#include<stdio.h>

int main()
{
    int a[5][5],b[5][5],c[5][5],m,n,i,j,p,q,k,sum = 0;

    printf("Enter number of rows and columns of first matrix:\n");
    scanf(" %d %d",&m,&n);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
            scanf(" %d",&a[i][j]);
    }

    printf("Enter number of rows and columns of second matrix:\n");
    scanf(" %d %d",&p,&q);

    if (n != p)
        printf("Matrices can't be multiplied.\n");
    else
    {
        printf("Enter elements of second matrix:\n");
        for (i = 0; i<m; ++i)
        {
            for (j=0; j<n; ++j)
                scanf(" %d",&b[i][j]);
        }

        for (i = 0; i<m; ++i)
        {
            for (j = 0; j<q; ++j)
            {
                for (k = 0; k<p; ++k)
                {
                    sum += a[i][k]*b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }

        printf("Product of two matrices:\n");

        for (i = 0; i<m; ++i)
        {
            for (j = 0; j<q; ++j)
                printf("%d\t",c[i][j]);
            printf("\n");
        }
    }

    return 0;
}
*/