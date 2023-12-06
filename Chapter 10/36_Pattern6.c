// Write a program to print the following pattern:
// 0
// 12
// 345
// 6789

#include <stdio.h>
int main() {
    int rows = 4, i, j, counter = 0;
    for ( i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", counter);
            counter++;
        }
        printf("\n");
        
    }
    
    return 0;
}