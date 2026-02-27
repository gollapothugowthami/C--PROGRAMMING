#include <stdio.h>

int main() {
    int n, hours, i = 0;
    int inactiveWeeks = 0;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &hours);
        if (hours == 0) {
            inactiveWeeks++;
        }
        i++;
    }

    printf("Inactive Weeks: %d\n", inactiveWeeks);
    printf("Risk Status: %s\n", (inactiveWeeks >= 3) ? "High" : "Low");

    return 0;
}
