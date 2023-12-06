// Write a program to enter a decimal number. Calculate and display the octal equivalent of this number. 

#include <stdio.h>
#include<math.h>

int main() {
    int user_input, remainder, octal = 0, i = 0; 
    
    printf("Enter a decimal number: ");
    scanf("%d", &user_input);

    while (user_input!=0) {
        remainder = user_input % 8; 
        octal += remainder * pow(10, i);
        user_input = user_input / 8; 
        i++;
    }
    
    printf("Octal: %d", octal);

    return 0;
}