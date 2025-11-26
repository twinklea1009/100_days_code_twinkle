//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h> // Required for the pow() function
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;
// Input principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
printf("Enter the annual interest rate (as a percentage): ");
    scanf("%f", &rate);
printf("Enter the time period (in years): ");
    scanf("%f", &time);
// Calculate Simple Interest
 simple_interest = (principal * rate * time) / 100;
 // Calculate Compound Interest
     rate = rate / 100;
    compound_interest = principal * pow((1 + rate), time) - principal;
// Display the results
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);
return 0;
}