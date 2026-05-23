#include <stdio.h>

int countDigits(int n) {
    int count = 0;

    while(n != 0) {
        n = n / 10;
        count++;
    }

    return count;
}

int main() {
    int n;
    printf("Enter the countDigits(n):");

    scanf("%d", &n);

    

    return 0;
}