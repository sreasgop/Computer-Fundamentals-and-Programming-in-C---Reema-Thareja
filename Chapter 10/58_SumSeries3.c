// Write a program to sum the series 1/2 + 2/3 + 3/4 + ..... + n/n+1; 

#include <stdio.h>
int main() {
    int n, i; 
    float series_sum = 0.0;

    printf("Enter the value of n (Positive Integer): ");
    scanf("%d", &n); 

    for(i=1; i<=n; i++){
        series_sum += i/(float)(i+1);
    }

    printf("The sum of the series 1/2 + 2/3 + 3/4 + ... + %d/%d: %.2f",n, n+1, series_sum);
    return 0;
}
