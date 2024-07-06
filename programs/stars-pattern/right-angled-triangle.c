#include <stdio.h>

int main()
{
    char name[11] = "PROGRAMMING";  // Number of rows
    printf("Right-Angled Triangle Pattern:\n");
    for (int i = 1; i <= 11; i++)
    {
        printf("%d. ", i);
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", name[j-1]);
        }
        printf("\n");
    }
    return 0;
}
