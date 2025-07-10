#include<stdio.h>

void array(int *a, int n);

void main()
{
    int a[100], n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for(i =0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }

    array(a, n);
}

void array( int *a, int n)
{
    int j;
    printf("The elements area:");
    for(j =0; j< n; j++)
    {
        printf("%d", a[j]);
    }

}
