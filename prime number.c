#include <stdio.h>
int main() {
int n;
scanf("%d", & n);
int sum = 0;
for (int i=1; i <= n; i++)

    if(n% i ==0)
{
    sum ++;
}
if(sum ==2)
{
    printf("prime number");
}
else
{
    printf("not a prime number");
}
 return 0;
}