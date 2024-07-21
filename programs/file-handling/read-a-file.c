#include <stdio.h>

int main() {
    FILE *fp;
    char name[40];

    // Open the file in read mode
    fp = fopen("file.txt", "r");

    // Check if the file was successfully opened
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the first line from the file
    if (fgets(name, 40, fp) != NULL) {
        printf("Name: %s", name);
    } else {
        printf("Error reading from file.\n");
    }

    // Close the file
    fclose(fp);

    return 0;
}
