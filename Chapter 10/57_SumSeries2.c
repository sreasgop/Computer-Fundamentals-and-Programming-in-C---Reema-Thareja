// Write a program to sum the series 1/1^2 + 1/2^2 + 1/3^2 + ...... 1/n^2.

#include <stdio.h>
#include<math.h>
int main() {
    int n, i;
    float series_sum = 0.0;

    printf("Enter the value of n (positive integer): ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        series_sum += (1/((float)i*i));
    }

    printf("The sum of the series 1/1^2 + 1/2^2 + 1/3^2 + .... + 1/%d^2: %.2f", n, series_sum);

    printf("\n\n%f", (float)3*3);

    return 0;
}