// Write a program to print the reverse of a number. 

#include <stdio.h>
int main() {
    int num, reversed_num, unit_digit;

    printf("\nEnter any number (More than one digit) : ");
    scanf("%d", &num);

    while(num!=0){
        unit_digit = num % 10;
        reversed_num = reversed_num * 10 + unit_digit;
        num = num/10;   
    }

    printf("The reversed number: %d\n", reversed_num);

    return 0;
}