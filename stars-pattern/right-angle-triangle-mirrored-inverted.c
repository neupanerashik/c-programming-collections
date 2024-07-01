#include <stdio.h>

void main()
{
    int n =5;
    printf("Right-Angled Mirrored Inverted Triangle Pattern:\n");

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j < i; j++) {
            printf("  ");
        }

        for (int j = i; j <= n; j++) {
            printf("* ");
        }

        printf("\n");
    }
    return;
}
