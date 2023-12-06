// Write a program to calcualte pow(x, n) i.e., to calculate x^n.

#include <stdio.h>

int power(int number, int exponent) {
    int i, result=1; 
    for (i = 0; i < exponent; i++) {
        result *= number;
    }
    return result; 
}


int main() {
    int i, num, exponent, result=1;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter the power: ");
    scanf("%d", &exponent);

    for(i=0; i<exponent; i++){
        result *= num; 
    }

    

    printf("%d", result);

    return 0;
}