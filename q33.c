//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h> 
int main() {
    int number, originalNumber, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    originalNumber = number; 
    // Count the number of digits in the input number
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }
originalNumber = number; 
    // Calculate the sum of the nth power of each digit
    while (originalNumber != 0) {
        remainder = originalNumber % 10; // Get the last digit
        result += pow(remainder, n);     // Add the nth power of the digit to the result
        originalNumber /= 10;            // Remove the last digit
    }
    if (result == number) { 
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
