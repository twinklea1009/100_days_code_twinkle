//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() 
{
int a, b;
// Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
// Before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);
// Swapping without third variable (using arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;
// After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
return 0;
}