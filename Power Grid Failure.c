#include <stdio.h>

int main() {
    int n, noise;
    int violations = 0;
    int max_streak = 0;
    int current_streak = 0;
    int i = 0;

    // Read the number of entries
    if (scanf("%d", &n) != 1) 

    while (i < n) {
        scanf("%d", & n);
        if (noise > 70) {
            violations++;
            current_streak++;
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
        } else {
            current_streak = 0;
        }
        i++;
    }

    printf("Noise Violations: %d\n", violations);
    printf("Lo+ngest Violation Streak: %d\n", max_streak);

    return 0;
}













