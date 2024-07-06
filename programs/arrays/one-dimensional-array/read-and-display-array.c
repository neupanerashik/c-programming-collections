//Program to read elements of array and display them
#include<stdio.h>

void main() {
    int i, n , a[100];

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++){
        printf("Element %d element:",i+1);
        scanf("%d", &a[i]);
    }

    printf("\nThe elements of array are:\n");
    for(i=0; i < n; i++){
        printf("%d\n", a[i]);
    }

    return;
}
