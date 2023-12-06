// Write a program using do-while loop to read the numbers until -1 is encountered. Also count the number of prime_numbers and composite numbers entered by the user. 

// My Source Code:

#include <stdio.h>
int main() {
    int i, num, is_prime, prime_nos = 0, composite_nos = 0;
    printf("\nEnter -1 to exit.\n\n");
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num==-1){
            break;
        } else {
            if(num<=1) {
                continue;
            } else {
                is_prime = 1;
                for(i=2; i<num; i++){
                    if(num%i==0){
                        is_prime = 0;
                        break;
                    }
                }
                if(is_prime == 1)
                    prime_nos++;
                else
                    composite_nos++;
            }
        }

    } while (1);
    
    printf("\nCount of Prime numbers entered: %d", prime_nos);
    printf("\nCount of composite numbers entered: %d", composite_nos);
    
    return 0;
}



// Source Code in Book:

// #include <stdio.h>
// int main() {

//     int num, i;
//     int prime = 0, composite = 0, flag = 0;  
    
//     printf("\nEnter -1 to exit");
//     printf("\n\nEnter any number: ");
//     scanf("%d", &num);

//     do{
//         for (i = 2; i <=num/2; i++)
//         {
//             if(num%i==0){
//                 flag = 1; 
//                 break;
//             }
//         }
//         if(flag==0)
//             prime++;
//         else
//             composite++;
        
//         flag = 0;
//         printf("Enter any number: ");
//         scanf("%d", &num);
//     } while ( num != -1);

//     printf("\nCount of prime numbers entered = %d", prime);
//     printf("\nCount of composite numbers entered = %d", composite);
//     return 0;
// }