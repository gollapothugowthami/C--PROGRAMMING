#include<stdio.h>
int main()
{
    int i,j,n,a[50],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(a[i]==a[j]){
    a[j]=a[n-1];
    for(k=j;k<n-1;k++)
    a[k]=a[k+1];
    n--;
    j--;
    }
    }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}