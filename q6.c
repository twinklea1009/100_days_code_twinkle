//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() 
{
int a, b, temp;
// Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
 // Before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);
// Swapping using a third variable
    temp = a;
    a = b;
    b = temp;
// After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
return 0;
}