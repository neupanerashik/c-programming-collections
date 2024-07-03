#include <stdio.h>
#include <math.h> // For pow function


int main() {
    double x;
    int n;

    // Input x and n
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the series sum
    double sum = 1.0;  // Initialize sum with the first term (1)
    double term = 1.0; // Initialize term for 1/x^i

    for (int i = 1; i <= n; i++) {
        term /= x;    // Calculate 1/x^i using term /= x to avoid repeated power calculations
        sum += term;  // Add the term to the sum
    }


    // Print the result
    printf("The sum of the series is: %.10f\n", sum);

    return 0;
}
