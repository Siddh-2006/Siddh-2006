//calculating total seconds from std. form 
#include <stdio.h>

int main() {
    int hours, minutes, seconds, total_seconds;
    printf("Enter time in hours: ");
    scanf("%d", &hours);

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
//formula
    total_seconds = hours * 3600 + minutes * 60 + seconds;
//result
    printf("Total seconds: %d", total_seconds);

    return 0;
}