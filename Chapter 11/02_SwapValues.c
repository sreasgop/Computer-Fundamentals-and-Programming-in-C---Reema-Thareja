// Write a function to swap the values of two variables. 

#include <stdio.h>

void swap_call_by_value(int, int);
void swap_call_by_reference(int*, int*);

int main() {
    int a=5, b=10, c=2, d=4;
    printf("\nIn main(), a=%d and b=%d", a, b);
    swap_call_by_value(a, b); 
    printf("\n\nIn main(), c=%d and d=%d", c, d);
    swap_call_by_reference(&c, &d);
    return 0;
}

void swap_call_by_value(int num1, int num2){
    int temp; 
    temp = num1; 
    num1 = num2; 
    num2 = temp; 
    printf("\nIn function (call by value): a = %d and b = %d", num1, num2);
}

void swap_call_by_reference(int *num1, int *num2){
    int temp;
    temp = *num1; 
    *num1 = *num2; 
    *num2 = temp;
    printf("\nIn function (call by reference): c = %d and d = %d", *num1, *num2);
    
}