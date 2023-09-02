//Time Incrementing
#include <stdio.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

void inputTime(struct time_struct *time) {
    printf("Enter hour: ");
    scanf("%d", &time->hour);
    printf("Enter minute: ");
    scanf("%d", &time->minute);
    printf("Enter second: ");
    scanf("%d", &time->second);
}

void displayTime(struct time_struct time) {
    printf("Time: %02d:%02d:%02d\n", time.hour, time.minute, time.second);
}

