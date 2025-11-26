//Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>
int main() 
{
int num1, num2, sum;
// Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
 // Calculating sum
    sum = num1 + num2;
// Displaying result
    printf("Sum = %d\n", sum);
return 0;
}