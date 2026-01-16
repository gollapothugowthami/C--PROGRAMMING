#include<stdio.h>
int main()
{
    int i,j,n,sum=0,prime;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        prime=1;
        for(j=2;j*j<=i;j++)
        if(i%j==0)
        prime=0;
        if(prime)
         sum+=i;
    }
    printf("%d",sum);
    return 0;
}