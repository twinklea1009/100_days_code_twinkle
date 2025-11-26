/* Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase).
The task is to determine if s and t are valid anagrams, meaning they contain the same characters with
the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/
/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

void checkAnagram(char *s, char *t)
{
    if (strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return;
    }

    int count[26] = {0};

    for (int i = 0; s[i]; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagram\n");
            return;
        }
    }
    printf("Anagram\n");
}

int main()
{
    char s[100], t[100];
    scanf("%s %s", s, t);
    checkAnagram(s, t);
    return 0;
}