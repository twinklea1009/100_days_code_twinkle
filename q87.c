// Q87: Count spaces, digits, and special characters in a string.
/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/
#include <stdio.h>
int main() 
{
    char str[100]; // Declare a character array to store the string
    int spaces = 0;
    int digits = 0;
    int special_chars = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); 

    // Loop through each character of the string until the null terminator
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // Alphabets are not counted as special characters in this context
            // You can add a counter for alphabets if needed
        } else {
            special_chars++;
        }
        i++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special_chars);

    return 0;
}