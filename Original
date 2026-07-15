#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    
    int original_a = *a;
    int original_b = *b;

    
    *a = original_a + original_b;


    *b = abs(original_a - original_b);
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
