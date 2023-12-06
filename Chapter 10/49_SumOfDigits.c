// Write a program to enter a number and calculate the sum of its digits. 

#include <stdio.h>
int main() {
    int num, sum; 
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0){
        sum += (num % 10);
        num/=10;
    }
    
    printf("The sum of digits of the number is: %d", sum);
    return 0;
}