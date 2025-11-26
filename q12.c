//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number >= 0) 
    {
    // Inner if-else: If the number is non-negative, check if it's zero or positive
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } 
    else 
    {
     // If the outer condition is false, the number must be negative
        printf("The number is negative.\n");
    }
 return 0; 
}