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
        printf("Enter %d element of the array:", i);
        scanf("%d", &a[i]);
        printf("\n You entered: %d\n", a[i]);
    }

    max = a[0]; //Assuming the first index element is the max value
    printf("\n The max value initially is: %d", max);

    for(i = 1; i <n ; i++)
    {
        printf("\nChecking for element:%d\n", a[i]);
        printf("Comparing with element:%d\n", max);
        printf("------------------------------------\n");
        if(a[i] > max)
        {
            max = a[i];
            printf("\nNow the max is: %d", max);
        }
    }

    printf("The largest element is %d", max);
    return;
}
