//Program to find the smallest element of an array
#include<stdio.h>
#include<conio.h>

void main()
{
    int n, i, min;

    printf("Enter the number of elements of array:\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of array:\n");
    for(i =0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0]; //Assuming the first index element is the min value

    for(i = 1; i <n ; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("The smallest element is %d", min);
    return;
}
