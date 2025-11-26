//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() 
{
float radius, area, circumference;
// Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
// Calculations using 3.14159 directly
    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;
// Output results
    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);
return 0;
}