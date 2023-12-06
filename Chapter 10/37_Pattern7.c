// Write a progran to print the following pattern:
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF

#include <stdio.h>
int main() {
    int rows = 6, i, j;
    for (i = 65; i <=70; i++)
    {
        for(j = 65; j<=i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
    
    return 0;
}