// Write a program using for loop to calculate the average of first n natural numbers. 

#include <stdio.h>
int main() {
    int n,i, sum = 0 ; 
    float average = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += i;
    }

    printf("The sum of the first %d natural numbers: %d", n, sum);
    average = ((float)sum / n);

    printf("\nAverage of first %d natural numbers: %.2f", n, average);
    return 0;
}