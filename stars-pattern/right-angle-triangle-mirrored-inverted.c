#include <stdio.h>

void main()
{
    int n =5;
    printf("Right-Angled Mirrored Inverted Triangle Pattern:\n");

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i-1; j++) {
            printf("  ");
        }

        for (int j = 1; j <= n +1 -i; j++) {
            printf("* ");
        }

        printf("\n");
    }
    return;
}
