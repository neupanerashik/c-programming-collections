//Program to add all the elements of array.
// the process to read the elements is same everywhere so you can use the same code
// till reading the elements then put the logic according to question

#include<stdio.h>

void main() {
    int i, n, a[100], sum = 0; //sum initialized as 0
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++){
        printf("Element %d element:",i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i < n; i++){
        sum += a[i];
    }

    printf("The sum of all the elements of array is: %d", sum);
    return;
}
