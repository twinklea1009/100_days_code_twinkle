//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main() 
{
    int num, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num!= 0) {
        remainder = num % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10; 
    }
    printf("Reversed Number: %d\n", reversedNumber);
return 0;
}