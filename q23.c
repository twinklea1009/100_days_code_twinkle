/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>
int main() {
    int late_days;
    float fine = 0.0;
printf("Enter the number of days the book is returned late: ");
 scanf("%d", &late_days);
    if (late_days <= 0) {
        printf("No fine. Book returned on time or early.\n");
    } else if (late_days <= 5) {
        fine = late_days * 2.0;
        printf("Fine: ₹%.2f\n", fine);
    } else if (late_days <= 10) {
        fine = (5 * 2.0) + ((late_days - 5) * 4.0);
        printf("Fine: ₹%.2f\n", fine);
    } else if (late_days <= 30) {
        fine = (5 * 2.0) + (5 * 4.0) + ((late_days - 10) * 6.0);
        printf("Fine: ₹%.2f\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }
return 0;
}