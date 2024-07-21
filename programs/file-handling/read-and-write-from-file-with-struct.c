#include<stdio.h>
#include<conio.h>
#include<string.h>

struct date
{
    int dd;
    int mm;
    int yy;
};

struct student
{
    int rollno;
    char name[40];
    char address[40];
    struct date dob;
};

void main()
{
    struct student s[10];
    int i;
    FILE *fp;

    printf("Enter the details of students:\n");
    for(i=0; i<2; i++)
    {
        printf("Enter the roll number of student:");
        scanf("%d", &s[i].rollno);
        printf("Enter the name of student:");
        scanf("%s",s[i].name);
        printf("Enter the address of student:");
        scanf("%s",s[i].address);
        printf("Enter the date of birth of student:\n");
        printf("Date:");
        scanf("%d", &s[i].dob.dd);
        printf("Month:");
        scanf("%d", &s[i].dob.mm);
        printf("Year:");
        scanf("%d", &s[i].dob.yy);
        printf("-------------------\n");
    }

    fp = fopen("student.txt", "w");

    for(i=0; i<; i++)
    {
        fprintf(fp, "%d %s %s %d %d %d\n", s[i].rollno,s[i].name, s[i].address, s[i].dob.dd, s[i].dob.mm, s[i].dob.yy);
    }
    fclose(fp);
}
