#include<stdio.h>
#include<conio.h>
#include <stdlib.h>  /for dynamic memory allocation

int sumOfElements(int *arr, int n);

void main ()
{
    int a[100], i, n, sum =0;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("\n Enter the elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Sum of all elements of the array: %d\n", sumOfElements(a, n));
}

int sumOfElements(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);  // Using pointer arithmetic to access array elements
    }
    return sum;
}

