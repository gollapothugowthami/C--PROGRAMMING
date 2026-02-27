#include <stdio.h>

int main() {
    int maxWeight, n, weight;
    int currentWeight = 0, count = 0, i = 0;
    int overloaded = 0;

    scanf("%d %d", &maxWeight, &n);

    while (i < n) {
        scanf("%d", &weight);
        if (overloaded == 0) {
            if (currentWeight + weight <= maxWeight) {
                currentWeight += weight;
                count++;
            } else {
                overloaded = 1; 
            }
        }
        i++;
    }

    printf("Passengers Allowed: %d\n", count);
    printf("Overload: %s\n", overloaded ? "Yes" : "No");

    return 0;
}
