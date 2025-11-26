//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float costPrice, sellingPrice, difference, percentage;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        difference = sellingPrice - costPrice;
        percentage = (difference / costPrice) * 100;
        printf("Profit: %.2f\n", difference);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        difference = costPrice - sellingPrice;
        percentage = (difference / costPrice) * 100;
        printf("Loss: %.2f\n", difference);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}