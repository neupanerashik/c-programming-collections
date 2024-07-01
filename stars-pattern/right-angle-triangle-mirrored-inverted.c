#include<stdio.h>

void main()
{
    int n =5;

    for(int i = n ; i >=1; i--)
    {
        for(int j = 0 ; j < n-i; j++ )
        {
            printf("  ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
    printf("\n");
    }
}
