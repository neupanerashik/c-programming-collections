#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct date
{
    int dd;
    int mm;
    int yy;
};

struct Student
{
    int rollno;
    char name[40];
    char address[40];
    struct date dob;
};

void main()
{
    FILE *fp;
    struct Student student;
    fp = fopen("student.txt", "r");
    char c;

    while(fscanf(fp, "%d %s %s %d %d %d", &student.rollno, student.name, student.address, &student.dob.dd, &student.dob.mm,&student.dob.yy ) != EOF)
    {
        printf("%d %s %s %d %d %d\n", student.rollno, student.name, student.address, student.dob.dd, student.dob.mm, student.dob.yy);
    }

    fclose(fp);
    getch();
}
