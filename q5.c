//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main() 
{
    float celsius, fahrenheit;
// Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
// Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
// Output result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
return 0;
}