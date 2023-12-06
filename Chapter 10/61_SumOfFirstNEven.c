// Write a program to calculate the sum of square of first n even numbers. 

#include <stdio.h>
int main() {
    int n, i, sum; 

    printf("Enter the value of n (positive integers): ");
    scanf("%d", &n);

    for(i=2; i<=n*2; i+=2){
        sum += i*i;
    }
    
    printf("2^2 + 4^2 + 6^2 + ... + %d^2: %d", n*2, sum);

    return 0;
}
