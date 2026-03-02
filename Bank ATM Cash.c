#include <stdio.h>

int main() {
    int cash, n, amount, i = 0, successful = 0;
    scanf("%d %d", &cash, &n);
    while (i < n) {
        scanf("%d", &amount);
        if (cash >= amount) {
            cash -= amount;
            successful++;
        }
        i++;
    }
    printf("Successful Withdrawals: %d\nRemaining Cash: %d\n", successful, cash);
    return 0;
}
