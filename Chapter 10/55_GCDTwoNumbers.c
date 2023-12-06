// Write a program to calculate GCD of two numbers. 

#include <stdio.h>
int main() {
    int num1, num2, dividend, divisor, remainder; 

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    if(num1>num2){
        dividend = num1;
        divisor = num2; 
    } else{
        dividend = num2; 
        divisor = num1; 
    }

    while(divisor){
        remainder = dividend % divisor;
        dividend = divisor; 
        divisor = remainder;
    }

    printf("\nGreatest Common Divisor of %d and %d: %d", num1, num2, dividend);

    return 0;
}