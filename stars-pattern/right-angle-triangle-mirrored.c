#include <stdio.h>

void main() {
    int n =5;
     printf("Right-Angled Mirrored Triangle Pattern:\n");

     for( int i = n; i >= 1; i--) {
        for(int j = 1 ; j < i; j++){
            printf("  ");
        }
        for(int j = 1; j <= n + 1 -i; j++ ){
            printf("* ");
        }
        printf("\n");
     }
     return;
}
