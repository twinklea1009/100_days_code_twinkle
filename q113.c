/* Q113: Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the kth smallest element in the array. Print the kth smallest element as output.
*/
/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

int quickSelect(int arr[], int low, int high, int k)
{
    if (low <= high)
    {
        int pi = partition(arr, low, high);
        if (pi == k)
        {
            return arr[pi];
        }
        else if (pi > k)
        {
            return quickSelect(arr, low, pi - 1, k);
        }
        else
        {
            return quickSelect(arr, pi + 1, high, k);
        }
    }
    return -1; // Should not reach here if k is valid
}

int main()
{
    int n, k;
    printf("enter the no of element in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element in array: ");
        scanf("%d", &arr[i]);
    }
    printf("enter the value of integer element k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid k\n");
        return 1;
    }

    int result = quickSelect(arr, 0, n - 1, k - 1);
    printf("%d\n", result);
    return 0;
}