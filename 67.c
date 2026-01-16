#include<stdio.h>
int main()
{
    int n1,n2,a[50],b[50],i;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    printf("%d ",a[i]);
    for(i=0;i<n2;i++)
    printf("%d ",b[i]);
    return 0;
}