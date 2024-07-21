#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char name[40];

    fp = fopen("file.txt", "w");

    printf("Enter text:");
    scanf("%s", name);
    fputs(name, fp);

    fclose(fp);
    getch();
}
