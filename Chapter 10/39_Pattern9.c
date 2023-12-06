// Write a program to print the following pattern:
//      1
//     121
//    12321
//   1234321
//  123454321

#include <stdio.h>
int main() {
    int rows = 5, i, j, k, l, m; 
    m = 3;
    for ( i = 1; i <= rows; i++)
    {   
        for(k=rows; k>i; k--){
            printf(" ");
        }
        for ( j = 1; j <=i ; j++)
        {

            printf("%d", j);            
        }
        
        for ( l = j-2; l > 0 ; l--)
        {
            printf("%d", l);
            m++;            
        }
        
        printf("\n");
        
    }
    
    return 0;
}