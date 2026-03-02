#include <stdio.h>

int main() {
    int n, usage, maxUsage = 0, surgeHours = 0, i = 0;
    if (scanf("%d", &n) != 1) return 0;
    while (i < n) {
        scanf("%d", &usage);
        if (usage > maxUsage) maxUsage = usage;
        if (usage > 5) surgeHours++;
        i++;
    }
    printf("Max Usage: %d\nSurge Hours: %d\n", maxUsage, surgeHours);
    return 0;
}
