//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    // Check if the character is an alphabet (lowercase or uppercase)
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a VOWEL.\n", ch);
        } else {
            printf("%c is a CONSONANT.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }
 return 0;
}