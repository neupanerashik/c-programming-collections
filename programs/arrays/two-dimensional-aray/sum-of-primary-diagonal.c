//Program to find the sum of primary diagonal
#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, sum = 0, mat[30][30], m, n;
    printf("Enter the order of m*n:\n");
    scanf("%d%d",&m, &n);
    if(m==n)
    {
        printf("Enter the elements of matrix:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }
        printf("\n The given matrix is:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d\t", mat[i][j]);
            }
            printf("\n");
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if((i == j) ) //for primary and secondary diagonal only this condition is changed
                {
                    sum = sum + mat[i][j];
                }
            }
        }
        printf("\nThe sum of primary diagonal is:%d", sum);
    }
}
