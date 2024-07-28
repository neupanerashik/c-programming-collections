//Program to calculate sum of function
// f(x) =  x-((x^3)/3!) + ((x^5)/5!)) - ((x^7)/7!)) + ......
//using recursion

#include<stdio.h>
#include<conio.h>

double evaluate_series(double x, int term)
{
    // Base case: when term is 1, return x (the first term in the series)
    if(term == 1)
    {
        return x;
    }

    int exponent = 2 * term -1;
    double numerator = 1;
    int factorial = 1;

    for(int i =1; i<= exponent; i++)
    {
        numerator *= x;
        factorial *= i;
    }

    double current_term = numerator / factorial;

    if(term %2 == 0)
    {
        current_term = -current_term;
    }

    return current_term + evaluate_series(x, term - 1);
}

void main()
{
    double x;
    int terms;

    // Input x and the number of terms
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Calculate f(x)
    double result = evaluate_series(x, terms);

    // Print the result
    printf("The value of f(x) is: %lf\n", result);

    return 0;

}
