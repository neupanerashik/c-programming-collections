//Program to find the row sum and column sum of an array

#include <stdio.h>

void main()
{

    int i, j, m, n, sum = 0;
    printf("Enter the order of matrix:\n");
    printf("Enter the number of rows:\n");
    scanf("%d", &m);
    printf("Enter the number of columns:\n");
    scanf("%d", &n);
    int mat[m+1][n+1]; //extra size to store the sum in respective rows and columns
    printf("Enter the elements of array:\n");
    for(i = 0;  i < m ; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    //sum of rows
    for(i=0; i<m ; i++)
    {
        for(j=0; j<n; j++)
        {
            sum += mat[i][j];
        }
        mat[i][j]= sum;
        sum=0;
    }

    //sum of columns
    for(j=0; j<n ; j++)
    {
        for(i=0; i<m; i++)
        {
            sum += mat[i][j];
        }
        mat[i][j]= sum;
        sum=0;
    }

    //printing the final result

    printf("The final result is:\n");
    for(i=0; i<m ; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("|");
        printf("%d", mat[i][j]);
        printf("\n");
    }
    printf("-----------------------\n");
    for(j=0; j<n; j++){
        printf("%d\t", mat[i][j]);
    }
    return;
}

