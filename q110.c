/* Q110: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k moving from left to right.
 Print the maximum elements for each window separated by spaces as output.
*/
/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
#define MAXN 100000

int main()
{
    int n, k;
    printf("no of element in array: ");
    scanf("%d", &n);
    int arr[MAXN];
    for (int i = 0; i < n; i++)
    {
        printf("enter element in array: ");
        scanf("%d", &arr[i]);
    }
    printf("enter the value integer k: ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid k\n");
        return 1;
    }

    int deq[MAXN]; // deque to store indices
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++)
    {
        // Remove elements from rear that are smaller than or equal to arr[i]
        while (front <= rear && arr[deq[rear]] <= arr[i])
        {
            rear--;
        }
        // Add current index to rear
        deq[++rear] = i;
        // Remove from front if out of window
        if (deq[front] == i - k)
        {
            front++;
        }
        // If window is full, print the max
        if (i >= k - 1)
        {
            printf("%d ", arr[deq[front]]);
        }
    }
    printf("\n");
    return 0;
}