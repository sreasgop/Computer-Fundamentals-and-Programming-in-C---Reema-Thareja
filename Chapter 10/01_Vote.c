// Write a program to find out whether a person is eligible to vote or not. 

#include <stdio.h>
int main() {
    
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18) {
        printf("You are eligible to vote!");
    }
    
    return 0;
}