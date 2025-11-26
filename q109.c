/* Q109: Write a program to take an integer array arr and an integer k as inputs.
 Print the maximum sum of all the subarrays of size k.
*/
/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main()
{
    int n, k;
    printf("no of element in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element in array: ");
        scanf("%d", &arr[i]);
    }
    printf("enter the value of integer k: ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid k\n");
        return 1;
    }

    // Calculate sum of first k elements
    int current_sum = 0;
    for (int i = 0; i < k; i++)
    {
        current_sum += arr[i];
    }
    int max_sum = current_sum;

    // Slide the window
    for (int i = k; i < n; i++)
    {
        current_sum = current_sum - arr[i - k] + arr[i];
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);
    return 0;
}