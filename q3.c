//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() 
{
int length, breadth, area, perimeter;
// Input length and breadth
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);
// Calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);
// Output results
    printf("Area of Rectangle = %d\n", area);
    printf("Perimeter of Rectangle = %d\n", perimeter);
return 0;
}