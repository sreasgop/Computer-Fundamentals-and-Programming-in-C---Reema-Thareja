// 2. Write a program to demonstrate the use of printf statement to print values of variables of different data types. 

#include<stdio.h>

int main() {
    
    int num = 10;                           // Integer
    float float_num = 5.5;                  // Float
    double pi = 3.1415926535897;    // Double 
    char c = 's';                           // Character
    char name[] = "Chandra Sreas Gop";      // String

    printf("\nDifferent Data Types:\n=====================\n");

    printf("Integer: %d\n", num);
    printf("Float: %f\n", float_num);
    printf("Double: %.13f\n", pi);
    printf("Character: %c\n", c);
    printf("String: %s\n\n", name);

    return 0;
}