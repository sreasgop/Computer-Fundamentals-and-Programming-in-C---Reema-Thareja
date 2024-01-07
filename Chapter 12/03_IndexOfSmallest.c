// Write a program to print the position of the smallest of n numbers using arrays. 
#include <stdio.h>
int main() {
    int arr[100], n, i, smallest, index_smallest; 
    printf("Enter the number of element (1-100) : ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    index_smallest = 0;
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
        if(arr[i]<smallest){
            
            smallest = arr[i];
            index_smallest = i; 
        }
    }
    printf("\nThe position of the smallest number: %d", index_smallest);
    return 0;
}