// Write a program to determine the character entered by the user. 

#include <stdio.h>
#include<ctype.h>

int main() {
    char user_input; 
    printf("Press any key: ");
    scanf("%c", &user_input);
    if (isalpha(user_input)>0) {
        printf("\nThe user has entered a character.");
    } else if (isdigit(user_input)>0) {
        printf("\nThe user has entered a digit.");
    } else if (isprint(user_input)) {
        printf("\nThe user has entered a printable character.");
    } else if (ispunct(user_input)>0) {
        printf("\nThe user has entered a punctuation mark.");
    } else if (isspace) {
        printf("\nThe user has entered a whitespace character.");
    }

    return 0;
}