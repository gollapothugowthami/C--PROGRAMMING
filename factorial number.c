#include <stdio.h>
int main() {
int fact = 1;
int n;
printf("enter a number");
scanf("%d", &n);
for (int i = 1; i <= n; i++){
    fact * = i;
}
    
    return 0;
}
