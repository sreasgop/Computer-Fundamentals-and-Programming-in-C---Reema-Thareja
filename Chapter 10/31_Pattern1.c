// Write a program to print the following pattern:
// Pass 1 - 1 2 3 4 5
// Pass 2 - 1 2 3 4 5
// Pass 3 - 1 2 3 4 5
// Pass 4 - 1 2 3 4 5
// Pass 5 - 1 2 3 4 5

#include <stdio.h>
int main() {
    const int num = 5;
    int i, j;
    for ( i = 1; i <= num; i++)
    {
        printf("Pass %d: ", i);
        for (j = 1; j <= num; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }
    
    return 0;
}