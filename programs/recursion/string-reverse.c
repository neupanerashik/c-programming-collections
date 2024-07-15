#include<stdio.h>
#include <conio.h>

int length (char str[]);

void main(void)
{
    char string[10];

    printf("Enter a string:");
    scanf("%s", string);

    printf("The string is:%s\n", string);

    printf("The length of string is %d", length(string));
    getch();
}

int length (char str[])
{
    static int i = 0;

    if(str[i]== '\0')
        return i;
    else
    {
        i++;
        length(str);
    }

}
