#include <stdio.h>

int main() {
    int orderAmount, speedType;
    int deliveryCharge = 0;

    scanf("%d", &orderAmount);
    scanf("%d", &speedType);

    switch (speedType) {
        case 1:   
            deliveryCharge = 50;
            break;

        case 2:   
            if (orderAmount < 1000)
                deliveryCharge = 100;
            else
                deliveryCharge = 0;
            break;

        default:
            printf("Invalid Speed Type");
            return 0;
    }

    printf("Delivery ₹%d", deliveryCharge);

    return 0;
}
