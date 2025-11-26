// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person person;
    char input[100];
    char gender_str[20];

    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 1;
    }

    char *token = strtok(input, "=");
    if (token != NULL)
    {
        token = strtok(NULL, "=");
        if (token != NULL)
        {
            token[strcspn(token, "\n")] = 0;
            strcpy(gender_str, token);
        }
    }

    if (strcmp(gender_str, "MALE") == 0)
    {
        person.gender = MALE;
    }
    else if (strcmp(gender_str, "FEMALE") == 0)
    {
        person.gender = FEMALE;
    }
    else
    {
        person.gender = OTHER;
    }

    if (person.gender == MALE)
    {
        printf("Male\n");
    }
    else if (person.gender == FEMALE)
    {
        printf("Female\n");
    }
    else
    {
        printf("Other\n");
    }

    return 0;
}