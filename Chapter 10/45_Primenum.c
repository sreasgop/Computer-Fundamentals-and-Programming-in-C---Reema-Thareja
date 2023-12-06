// Write a program to classify a given number as prime or composite. 

// Formal Definition of Prime Number: A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. In other words, a prime number is a whole number greater than 1 that has no positive divisors other than 1 and itself. The first few prime numbers are 2, 3, 5, 7, 11, and so on, as they cannot be evenly divided by any other numbers except 1 and the number itself. If a number has more than two distinct positive divisors, it is called a composite number.

// In a given number n, if there exists a factor greater than n/2, it must have a corresponding factor smaller than n/2. If n is not a prime number, it can be expressed as the product of two numbers, a and b, such that a * b = n. If both a and b are greater than n/2, their product would be greater than n, which is not possible.

#include <stdio.h>
int main() {
    int user_input, i, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    if (user_input<=1){
        printf("Not Prime!");
    } else {
        for ( i = 2; i < user_input/2; i++)
        {
            if(user_input%i == 0){
                is_prime = 0; 
                break;
            }
        }
        if(is_prime == 1){
            printf("%d is a prime number!", user_input);
        } else {
            printf("%d is a composite number.", user_input);
        }
    } 
    
    return 0;
}