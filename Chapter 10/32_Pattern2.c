// Write a program to print the following pattern:
// **********
// **********
// **********
// **********
// **********

#include <stdio.h>
int main() {
    int num = 5, i, j;
    for(i = 0; i < num; i++){
        for(j=0; j < 10; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}