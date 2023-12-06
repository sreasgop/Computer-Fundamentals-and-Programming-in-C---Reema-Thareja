// Write a program using loop to calculate factorial of a number. 

#include <stdio.h>
int main() {

    int num, i, factorial = 1; 
    
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        factorial *= i;
    }
    printf("%d! = %d", num, factorial);
    return 0;
}