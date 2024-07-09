//Program to find the length of a string without using any built in functions.
// strlen() can be used directly to find the length of string
// however we will find the length by our approach here

#include<stdio.h>
void main ()
{
    char c[50], len, i=0;

    printf("Enter the string:\n");
    gets(c);

    printf("Given string is:");
    puts(c);

    while (c[i] != '\0')
    {
        len++;
        i++;
    }
    printf("\nThe length of the given string is:%d", len);
    return;
}
