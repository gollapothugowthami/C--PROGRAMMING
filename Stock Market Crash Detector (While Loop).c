#include <stdio.h>

int main() {
    int n, prev, current, i = 1, totalDrops = 0, streak = 0, crashDay = -1;
    if (scanf("%d", &n) < 1) return 0;
    scanf("%prev", &prev);
    while (i < n) {
        scanf("%d", &current);
        if (current < prev) {
            totalDrops++;
            streak++;
            if (streak == 3 && crashDay == -1) crashDay = i + 1;
        } else {
            streak = 0;
        }
        prev = current;
        i++;
    }
    if (crashDay != -1) printf("Crash Day: %d\n", crashDay);
    else printf("Crash Day: Not Detected\n");
    printf("Total Drops: %d\n", totalDrops);
    return 0;
}
