// Write a program to sum the series 1+1/2+1/3+.......+1/n.

#include <stdio.h>
int main() {
    int i, n;
    float series_sum = 0.0;

    printf("Enter the value of n (Positive Integer): ");
    scanf("%d", &n);

    for(i = 1; i <=n; i++){
        series_sum += (1/(float)i);
    }

    printf("The sum of the series 1/1 + 1/2 + .... + 1/%d = %.2f", n, series_sum);
    return 0;
}