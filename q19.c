//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Enter the length of side 1: ");
    scanf("%d", &side1);
    printf("Enter the length of side 2: ");
    scanf("%d", &side2);
    printf("Enter the length of side 3: ");
    scanf("%d", &side3);
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("The given side lengths do not form a valid triangle.\n");
    } else {
        // Classify the triangle
        if (side1 == side2 && side2 == side3) {
            printf("This is an Equilateral Triangle.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("This is an Isosceles Triangle.\n");
        } else {
            printf("This is a Scalene Triangle.\n");
        }
    }
return 0;
}