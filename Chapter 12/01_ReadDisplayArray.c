// Write a program to read an array and display it. 

#include <stdio.h>
int main() {
    int arr[10], i;
    printf("Enter the elements: ");
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }
    return 0;
}