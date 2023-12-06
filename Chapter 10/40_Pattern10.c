// Write a program to create the following pattern:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include <stdio.h>
int main() {
    int rows = 5, i, j, k;
    for ( i = 1; i <= rows; i++)
    {   
        for(k = 1; k <= rows; k++)
            printf(" ");
        for (j = 1; j <=i; j++)
            printf("%2d", i);
            printf("\n");
        
    }
    
    return 0;
}

// #include <stdio.h>
// int main() {
//     const int N = 5; 
//     int i, j, k, count=5, c;
//     for ( i = 1; i <= N; i++)
//     {
//         for ( k = 1; k <= N; k++) // This loop prints exactly 5 spaces before each line of numbers.
//             printf(" ");
//             for (j = 1; j <= i ; j++)
//                 printf("%2d", i);
//                 printf("\n");
//                 c--;
//     }
//     return 0;
// }