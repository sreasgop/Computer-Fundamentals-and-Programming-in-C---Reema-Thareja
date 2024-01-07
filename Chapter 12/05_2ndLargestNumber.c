// Write a program to find the second largest number using an array of n numbers. 
#include <stdio.h>
int main() {
    int arr[100], n, largest, second_largest, i; 

    printf("\nEnter the number of elements (1-100) : ");
    scanf("%d", &n);

    printf("\nEnter %d numbers in the array: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for(i=0; i<n; i++){
        if(largest<arr[i]){
            second_largest = largest; 
            largest = arr[i];
        }
    }

    printf("\nThe largest element in the array: %d", largest);
    printf("\nThe 2nd largest element in the array: %d", second_largest);

    return 0;
}
