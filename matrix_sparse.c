// [find whether a matrix is sparse matrix or not]
/*
#include<stdio.h>

int main()
{
    int a[5][5],m,n,i,j,counter = 0;
    printf("Enter number of rows and columns of matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter elements:\n");
    for (i=0; i<m; ++i)
        for (j=0;  j<n; ++j)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j] == 0)
                counter++;
        }

    if (counter > ((m*n)/2))
        printf("The matrix is a sparse matrix.\n");
    else
        printf("The matrix is not a sparse matrix.\n");

    printf("There are %d number of zeros.\n",counter);

    return 0;
}
*/