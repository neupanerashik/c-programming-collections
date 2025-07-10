#include<stdio.h>
#include<conio.h>

struct book {
    char name[30];
    char author[20];
    float price;
};

void main(){
    struct book b;
    FILE *fp;

    fp= fopen("library.dat", "r");

    while(fscanf(fp,"%s %s %f", b.name, b.author, &b.price) != EOF) {

        if(b.price < 300) {
            printf("Name: %s, Author: %s, Price: %f\n", b.name, b.author, b.price);
        }
    }
    fclose(fp);
    return;
}
