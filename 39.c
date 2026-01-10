#include<stdio.h>
int main()
{
    int n,i,a[50],b[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    b[i]=a[i];
    for(i=0;i<n;i++)
    printf(" %d ",b[i]);
    return 0;
}