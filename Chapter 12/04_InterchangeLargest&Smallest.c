// Write a program to interchange the largest and the smallest number in the array. 
#include <stdio.h>
int main() {
    int n, arr[100], i, largest, largest_pos, smallest, smallest_pos; 
    
    printf("Enter the number of elements (1-100) : ");
    scanf("%d", &n);
    
    printf("Enter %d numbers in the array: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];
    smallest_pos = 0; 
    largest_pos = 0;

    printf("\nThe Original Array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if(arr[i]>largest){
            largest = arr[i];
            largest_pos = i;    
        }

        if(arr[i]<smallest){
            smallest = arr[i];
            smallest_pos = i;
        }   
    }
    
    arr[smallest_pos] = largest;
    arr[largest_pos] = smallest;

    printf("\nArray after interchanging the largest element and the smallest number is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}