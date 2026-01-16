#include<stdio.h>
int main()
{
    int a,b,i,j,count;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
    if(i<2)
    continue;
    count=0;
    for(j=1;j<=i;j++)
    if(i%j==0)
    count++;
    if(count==2)
    printf("%d ",i);
    }
    return 0;
}