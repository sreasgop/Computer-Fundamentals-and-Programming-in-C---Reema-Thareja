// Write a program to print the following pattern:
//      1
//     12
//    123
//   1234
//  12345

#include <stdio.h>
int main() {
    int rows = 5, i, j, k;
    for ( i = 1; i <= rows; i++)
    {
        for ( k = rows; k >= i; k--){
            printf(" ");
        }
        for ( j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
