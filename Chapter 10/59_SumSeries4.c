// Write a program to sum the series 1/1+ 2^2/+ 3^3/3 + .... + n^n/n

#include <stdio.h>
#include<math.h>

int main() {
    int n, i; 
    float series_sum = 0.0; 
    
    printf("Enter the value of n(positive integer): ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++) {
        series_sum += pow(i, i)/i;
    }

    printf("The sum of the series 1/1 + 2^2/2 + 3^3/3 + ... + %d^%d/%d: %.2f",n, n, n, series_sum);

    return 0;
}