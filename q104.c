/* Q104: Write a Program to take a positive integer n as input, and find the pivot integer x
such that the sum of all elements between 1 and x inclusively equals the sum of all
elements between x and n inclusively. Print the pivot integer x. If no such integer
exists, print -1. Assume that it is guaranteed that there will be at most one pivot
integer for the given input. */

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the total sum from 1 to n
    long long totalSum = (long long)n * (n + 1) / 2;

    // The condition is: sum(1 to x) = sum(x to n)
    // We know sum(1 to x) = x * (x + 1) / 2
    // And sum(x to n) = totalSum - sum(1 to x-1)
    // So, x * (x + 1) / 2 = totalSum - (x - 1) * x / 2
    // x^2 + x = 2 * totalSum - (x^2 - x)
    // x^2 + x = 2 * totalSum - x^2 + x
    // 2 * x^2 = 2 * totalSum
    // x^2 = totalSum
    // x = sqrt(totalSum)

    double x= sqrt(totalSum);
    int x_int = (int)x;

    if (x_int* x_int == totalSum) {
        printf("%d\n", x_int);
    } else {
        printf("-1\n");
    }

    return 0;
}