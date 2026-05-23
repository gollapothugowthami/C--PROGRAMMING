#include <stdio.h>
int main()
float addition4(float a, float b, float c, float d) {
    return a + b + c + d;
}

float subtraction4(float a, float b, float c, float d) {
    return a - b - c - d;
}

float multiply4(float a, float b, float c, float d) {
    return a * b * c * d;
}

float division4(float a, float b, float c, float d) {
    return a / b / c / d;
}

int main() {
    float n1, n2, n3, n4;

    printf("Enter 4 float numbers: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    printf("Addition = %.2f\n", addition4(n1, n2, n3, n4));
    printf("Subtraction = %.2f\n", subtraction4(n1, n2, n3, n4));
    printf("Multiplication = %.2f\n", multiply4(n1, n2, n3, n4));
    printf("Division = %.2f\n", division4(n1, n2, n3, n4));

    return 0;
}