#include <stdio.h>

// add is the short name for address
void compare(int a, int b, int* add_great, int* add_small)
{
    if (a > b) {

        // a is stored in the address pointed
        // by the pointer variable *add_great
        *add_great = a;
        *add_small = b;
    }
    else {
        *add_great = b;
        *add_small = a;
    }
}

// Driver code
int main()
{
    int great, small, x, y;

    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);

    // The last two arguments are passed
    // by giving addresses of memory locations
    compare(x, y, &great, &small);
    printf("\nThe greater number is %d and the smaller number is %d",
           great, small);

    return 0;
}
