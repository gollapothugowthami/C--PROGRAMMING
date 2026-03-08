#include <stdio.h>

int main() {
    int capacity, n, load, i = 0, safe = 0, failures = 0;
    scanf("%d %d", &capacity, &n);
    while (i < n) {
        scanf("%d", &load);
        if (load <= capacity) safe++;
        else failures++;
        i++;
    }
    printf("Safe Hours: %d\nFailure Count: %d\n", safe, failures);
    return 0;
}
