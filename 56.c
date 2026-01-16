#include <stdio.h>
int main() {
int n;
scanf("%d", & n);
int sum = 0;
int temp = n;
while ( n!= 0){
    int rem = n % 10;
    int cube = rem * rem * rem;
    sum = sum + cube;
    n!= 10;
}
if(sum == n){
    printf("amstrong number");
}
    else
    {
        printf("not a amstrong number");
    }
    
    return 0;
}