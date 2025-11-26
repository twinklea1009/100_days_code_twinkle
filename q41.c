// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h> // Required for pow() function

int main() 
{
    int num, swappedNum;
    int firstDigit, lastDigit, digitsCount = 0;
    int temp;

    printf("Enter any number: ");
    scanf("%d", &num);

    // Handle single-digit numbers
    if (num >= 0 && num < 10) {
        printf("Number after swapping first and last digit: %d\n", num);
        return 0;
    }

    // Find the last digit
    lastDigit = num % 10;

    // Count the number of digits
    temp = num;
    while (temp != 0) {
        digitsCount++;
        temp /= 10;
    }

    // Find the first digit
    firstDigit = num / (int)pow(10, digitsCount - 1);

    // Construct the swapped number
    swappedNum = lastDigit; // Start with the last digit
    swappedNum *= (int)pow(10, digitsCount - 1); // Place it at the first position

    // Add the middle part of the number
    swappedNum += num % (int)pow(10, digitsCount - 1); // Remove the original first digit
    swappedNum -= lastDigit; // Remove the original last digit (which is now at the end of the middle part)

    swappedNum += firstDigit; // Add the original first digit at the last position

    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}