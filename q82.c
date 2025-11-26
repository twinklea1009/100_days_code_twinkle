// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main() {
    char str[] = "Hello"; // Example string
    int i = 0;

    // Loop through the string until the null terminator ('\0') is encountered
    while (str[i] != '\0') {
        printf("%c\n", str[i]); // Print the character followed by a newline
        i++; // Move to the next character
    }

    return 0;
}