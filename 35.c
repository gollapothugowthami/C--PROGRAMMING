#include<stdio.h>
int main()
{
    int n,i,a[50],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    count++;
    }
    printf("%d",count);
    return 0;
}