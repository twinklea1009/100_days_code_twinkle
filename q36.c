//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, i, gcd;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    gcd = 1;
    for (i = 1; i <= num1 && i <= num2; ++i) {
        // Check if 'i' is a factor of both num1 and num2
        if (num1 % i == 0 && num2 % i == 0) {
            // If 'i' is a common factor, update gcd to 'i'
            // The last common factor found will be the greatest
            gcd = i;
        }
    }
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}