
#include <stdio.h>

int main() {
    int n, status, i = 0;
    int currentStreak = 0, maxStreak = 0;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &status);
        if (status == 0) {
            currentStreak++;
            if (currentStreak > maxStreak) maxStreak = currentStreak;
        } else {
            currentStreak = 0;
        }
        i++;
    }

    printf("Longest Default Streak: %d\n", maxStreak);

    return 0;
}
