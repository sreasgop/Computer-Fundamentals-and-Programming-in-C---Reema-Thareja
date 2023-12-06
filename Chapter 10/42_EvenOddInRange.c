// Write a program using a for loop to print all the numbers from m to n, thereby classifying them as even or odd. 

#include <stdio.h>
int main() {
    int i, m, n; 
    
    printf("Enter the value of m: ");
    scanf("%d", &m);
    
    printf("Enter the vlaue of n: ");
    scanf("%d", &n);

    for(i=m; i<=n; i++){
        if(i % 2 == 0){
            printf("%d is even\n", i);
        } else{
            printf("%d is odd\n", i);
        }
    }

    return 0;
}