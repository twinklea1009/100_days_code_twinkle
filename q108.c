/* Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal
to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of
 nums is guaranteed to fit in a 32-bit integer. */

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Compute prefix products
    long long prefix[n + 1];
    prefix[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Compute suffix products
    long long suffix[n + 1];
    suffix[n] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i];
    }

    // Compute answer
    for (int i = 0; i < n; i++)
    {
        long long prod = prefix[i] * suffix[i + 1];
        printf("%lld", prod);
        if (i < n - 1)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}