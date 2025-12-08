#include <stdio.h>

void main() {
    int minutes, hours, remain;

    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;       
    remain = minutes % 60;      

    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d\n", remain);


}
