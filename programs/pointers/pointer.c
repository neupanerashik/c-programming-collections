#include<stdio.h>

void main() {
    static int array[10] = {1,2,3,4,5};

    int *a = array;

    for(int i=0; i<10; i++) {
        printf("%d\n", &    a[i]);
    }
}
