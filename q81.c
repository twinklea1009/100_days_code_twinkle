// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:

Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int count = 0; // Initialize a counter variable

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    // Loop through the string until the null terminator is found
    for (int i = 0; str[i] != '\0'; i++) {
        count++; // Increment the counter for each character
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
