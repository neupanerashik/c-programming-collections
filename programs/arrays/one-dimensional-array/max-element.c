//Program to find the max element of an array
#include<stdio.h>
#include<conio.h>

void main()
{
    int n, i, max;

    printf("Enter the number of elements of array:\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of array:\n");
    for(i =0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0]; //Assuming the first index element is the max value

    for(i = 1; i <n ; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("The largest element is %d", max);
    return;
}
