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
int main()
{ 
int size, i, j, temp, target;
printf("Enter size of array: ");
scanf("%d", &size);
int nums[size];
printf("Enter the target element: ");
scanf("%d", &target);
printf("Enter elements in array: ");
for(i=0; i<size; i++)
{ scanf("%d", &nums[i]); }
/*Array sorting code */
for(i=0; i<size; i++)
{ for(j=i+1; j<size; j++)
{
if(nums[j] <nums[i])
{temp = nums[i];
nums[i] = nums[j];
nums[j] = temp; 
}}}
int first_occurrence = -1;
    int last_occurrence = -1;

    // Find first occurrence
    for (i = 0; i < size; i++) {
        if (nums[i] == target) {
            first_occurrence = i;
            break; // Exit loop once first occurrence is found
        }
    }

    // Find last occurrence
    if (first_occurrence != -1) { // Only search for last if first was found
        for (i = size - 1; i >= 0; i--) {
            if (nums[i] == target) {
                last_occurrence = i;
                break; // Exit loop once last occurrence is found
            }
        }
    }

    // Print results
    printf("First occurrence index: %d\n", first_occurrence);
    printf("Last occurrence index: %d\n", last_occurrence);

    return 0;
}
