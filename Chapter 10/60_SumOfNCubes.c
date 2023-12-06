// Write a program to calculate the sum of cubes of first n numbers. 

#include <stdio.h>
#include<math.h>

int main() {
    int n, i, series_sum;
    
    printf("Enter the value of n (positive integer): ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        series_sum += pow(i, 3);
    }

    printf("The sum of cubes of 1st %d numbers: %d", n, series_sum);

    return 0;
}