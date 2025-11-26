/* Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
 The elements in the sorted array might be repeated. You need to print the first and last
  occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present. */

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5
*/
#include <stdio.h>
#include <stdlib.h> // For qsort

// Comparison function for qsort (ascending order)
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

// Function to find first occurrence
int findFirst(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    int first = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return first;
}

// Function to find last occurrence
int findLast(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    int last = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return last;
}

int main()
{
    int n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the elements:");
        scanf("%d", &nums[i]);
    }

    // Sort the array before searching
    qsort(nums, n, sizeof(int), compare);

    printf("Enter the target value: ");
    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    printf("%d, %d\n", first, last);

    return 0;
}