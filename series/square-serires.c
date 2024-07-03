#include<stdio.h>

void main() {

     int n;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the series sum
     int sum = 0;  // Initialize sum to 0

    for (int i = 1; i <= n; i++) {
        sum += i * i;  // Add i^2 to sum
    }

    // Print the result
    printf("The sum of the series is: %d\n", sum);
}
