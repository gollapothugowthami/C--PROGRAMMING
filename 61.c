#include<stdio.h>
int main()
{
int a ,b,i,result=1;
scanf("%d %d",&a,&b);
for(i= 0;i <= b; i++)
result*=a;
printf("%d",result);
return 0;
}