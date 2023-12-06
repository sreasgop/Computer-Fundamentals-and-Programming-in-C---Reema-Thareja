// Write a program to enter an octal number. Calculate and display the decimal equivalent of this number. 

#include <stdio.h>
int main() {

    int user_input, unit_digit, decimal, i=1; 
    
    printf("Enter any octal number: ");
    scanf("%d", &user_input);
    
    while(user_input!=0){
        unit_digit = user_input % 10; 
        decimal += unit_digit * i; 
        user_input/=10;
        i*=8;
    }
    
    printf("Decimal: %d", decimal);
    return 0;
}