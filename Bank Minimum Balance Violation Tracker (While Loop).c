#include <stdio.h>

int main() {
    int n, initialBalance, transaction;
    int lowBalanceDays = 0;
    int i = 0;
    if (scanf("%d", &n) != 1) return 0;
    if (scanf("%d", &initialBalance) != 1) return 0;
    int currentBalance = initialBalance;
    while (i < n) {
        scanf("%d", &transaction);
        
        currentBalance += transaction;
        if (currentBalance < 2000) {
            lowBalanceDays++;
        }
        
        i++;
    }
    printf("Final Balance: %d\n", currentBalance);
    printf("Low Balance Days: %d\n", lowBalanceDays);

    return 0;
}
