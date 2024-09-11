//converting total seconds into std. form
#include <stdio.h>

int main()
{ 
    int total_seconds, hours, minutes, seconds;
    // taking seconds as input
    printf(" Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60; // total min formula
    seconds = (total_seconds % 3600) % 60; // total hour formula
    // printing result
    printf("Time: %d hours, %d minutes, %d seconds", hours, minutes, seconds);

    return 0;
}