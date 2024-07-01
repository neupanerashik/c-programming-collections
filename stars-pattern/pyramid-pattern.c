#include <stdio.h>


int main()
{
    int n = 5;  // Number of rows
    printf("Pyramid Pattern:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
