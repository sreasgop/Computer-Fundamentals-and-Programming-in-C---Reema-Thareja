// Write a program to enter a decimal number. Calculate and display the binary equivalent of this number.

#include <stdio.h>
#include<math.h>

int main() {

    int user_input, remainder, binary = 0, i=0;
    
    printf("Enter a decimal number: ");
    scanf("%d", &user_input);


    while(user_input != 0){
        remainder = user_input % 2;
        binary += remainder*pow(10, i);
        user_input = user_input/2;
        i++;
    }

    printf("%d", binary);

    return 0;
}
