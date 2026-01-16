#include<stdio.h>
int main()
{
    int n,d=0,a=1;
    scanf("%d",&n);
    while(n){
        d=d+(n%10)*a;
        a=a*2;
        n=n/10;
    }
    printf("%d",d);
    return 0;
}