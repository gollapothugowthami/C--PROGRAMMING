#include <stdio.h>

int main() {
    int accountType, years;
    int interest;

    scanf("%d", &accountType);
    scanf("%d", &years);

    switch (accountType) {
        case 1:   
            interest = 4;
            break;

        case 2:   
            if (years <= 3)
                interest = 5;
            else
                interest = 7;
            break;

        default:
            printf("Invalid Account Type");
            return 0;
    }

    printf("Interest %d%%", interest);

    return 0;
}bank interest
