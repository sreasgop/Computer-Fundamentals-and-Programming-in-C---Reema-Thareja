// Write a program to add two integers using functions. 

#include <stdio.h>

int sum(int a, int b);

int main() {
    int num1, num2, addition = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    addition = sum(num1, num2);
    printf("Sum: %d", addition);
    return 0;
}

int sum(int a, int b){
    return a + b;
}