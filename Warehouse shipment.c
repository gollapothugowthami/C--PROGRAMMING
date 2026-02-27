#include <stdio.h>

int main() {
    int n, delay, i = 0;
    int totalDelay = 0, delayedDays = 0;

    if (scanf("%d", &n) != 1) return 0;

    while (i < n) {
        scanf("%d", &delay);
        totalDelay += delay;
        if (delay > 2) {
            delayedDays++;
        }
        i++;
    }

    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d\n", delayedDays);

    return 0;
}
