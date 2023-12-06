//Write a program to print the following pattern:
// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
int main() {
    int rows = 5, i, j;
    for ( i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}