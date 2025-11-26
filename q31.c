//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int decimal_num,binary_num = 0;     int remainder, place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);
    if (decimal_num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    int original_decimal_num = decimal_num; 
    while (decimal_num > 0) {
        remainder = decimal_num % 2;
        binary_num += remainder * place;
        place *= 10;
        decimal_num /= 2;
    }
printf("The binary representation of %d is: %d\n", original_decimal_num, binary_num);
    return 0;
}