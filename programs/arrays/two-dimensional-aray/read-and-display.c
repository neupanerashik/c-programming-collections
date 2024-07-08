//Program to read elements of a matrix and display it.
#include<stdio.h>

void main() {
    int i, j, m, n;
    printf("Enter the order of matrix:\n");
    printf("Enter the number of rows:\n");
    scanf("%d", &m);
    printf("Enter the number of columns:\n");
    scanf("%d", &n);
    int mat[m][n];
    printf("Enter the elements of array:\n");
    for(i = 0;  i < m ; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The entered matrix is:\n");
    for(i = 0; i< m; i++){
        for(j=0; j<n; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return;
}
