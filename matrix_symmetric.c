// [check whether matrix is symmetric or not]
/*
#include<stdio.h>

int main() {
    int a[5][5], transpose[5][5],m, n, i, j;
    printf("Enter number of rows and columns of matrix:\n");
    scanf(" %d %d", &m, &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf(" %d", &a[i][j]);
        }
    }

    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            transpose[j][i] = a[i][j];

    if(m == n)
    {
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                if (a[i][j] != transpose[i][j])
                    break;
            }
            if (j == m)
                break;
        }

        if (j == m)
            printf("The matrix is symmetric.\n");
        else
            printf("The matrix is not symmetric.\n");
    }

    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
 */