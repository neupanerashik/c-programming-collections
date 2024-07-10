/*
Program to change the uppercase letter to lowercase and vice versa
for a word
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 100

void main()
{
    char input[size];
    int i, len;

    printf("Enter the string:\n");
    gets(input);

    len = strlen(input);

    for(i =0; i< len; i++)
    {
        if(input[i] >= 65 && input[i] <= 90)
        {
            input[i] = input[i] + 32;
        }
        else if(input[i] >= 97 && input[i] <= 112)
        {
            input[i] = input[i] - 32;
        }
    }

    printf("\Converted String:%s", input);
}
