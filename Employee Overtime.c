#include <stdio.h>

int main() {
    int n, hours, i = 0, total = 0, burnout = 0;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &hours);
        total += hours;
        if (hours > 4) burnout++;
        i++;
    }
    printf("Total Overtime: %d\nBurnout Days: %d\n", total, burnout);
    return 0;
}
