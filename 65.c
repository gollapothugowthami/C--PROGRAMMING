#include<stdio.h>
int main()
{
    int n,a=1,d=0;
    scanf("%d",&n);
    while(n)
    {
        d=d+(n%2)*a;
        a=a*10;
        n=n/2;
    }
    printf("%d",d);
    return 0;
}