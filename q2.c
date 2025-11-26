//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() 
{
    int num1, num2, sum, difference, product, quotient;
// Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
// Calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    // Display results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient = %d\n", quotient);
    } else 
    {
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }
return 0;
}