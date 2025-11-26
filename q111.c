/* Q111: Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the first negative integer in each subarray of size k moving from left to right.
  If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/
/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
#define MAXN 100005

int main()
{
    int n, k;
    printf("enter the no of element in array: ");
    scanf("%d", &n);
    int arr[MAXN];
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

    int deq[MAXN]; // deque to store indices of negative numbers
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++)
    {
        // Remove indices out of the current window
        while (front <= rear && deq[front] < i - k + 1)
        {
            front++;
        }
        // Add current index if negative
        if (arr[i] < 0)
        {
            deq[++rear] = i;
        }
        // If window is full, print the first negative or 0
        if (i >= k - 1)
        {
            if (front <= rear)
            {
                printf("%d ", arr[deq[front]]);
            }
            else
            {
                printf("0 ");
            }
        }
    }
    printf("\n");
    return 0;
}