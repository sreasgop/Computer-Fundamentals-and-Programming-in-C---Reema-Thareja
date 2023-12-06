// Write a program to enter a hexadecimal number. Calculate and display the decimal equivalent of this number. 

#include <stdio.h>
int main() {
    int hexa_decimal, unit_digit=0, i=1, decimal=0; 
    
    printf("Enter any hexadecimal number: ");
    scanf("%d", &hexa_decimal);

    while (hexa_decimal!=0)
    {
        unit_digit = hexa_decimal % 10;
        decimal += (unit_digit * i); 
        hexa_decimal/=10;
        i*=16;
    }
    
    printf("Decimal: %d", decimal);

    return 0;
}