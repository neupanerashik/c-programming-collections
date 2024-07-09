//Program to check if a giver string is palindrome or not
#include<stdio.h>
#include<string.h>

void main()
{
    char c[40], len, pal=1, i, j;

    printf("Enter the string:\n");
    gets(c);

    len = strlen(c);
    j = len -1;

    for(i = 0; i< len/2; i++, j--)
    {
        if(c[i] != c[j])
        {
            pal =0;
            break;
        }
    }
    if(pal == 1) {
        printf("Yes, the given string is palindrome.");
    }else {
        printf("No, the given string is not a palindrome.");
    }
    return;
}
