//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() 
{
    int totalSeconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);
// Calculate hours
    hours = totalSeconds / 3600;
// Calculate remaining seconds after extracting hours
    int remainingSeconds = totalSeconds % 3600;
// Calculate minutes from remaining seconds
    minutes = remainingSeconds / 60;
// Calculate final seconds
    seconds = remainingSeconds % 60;
// Display the result
    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);
return 0;
}