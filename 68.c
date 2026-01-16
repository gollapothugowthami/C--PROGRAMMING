#include<stdio.h>
int main()
{
    int n,i,j,a[50],count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    if(a[i]==-1)
    continue;
    count=1;
    for(j=i+1;j<n;j++){
    if(a[i]==a[j]){
    count++;
    a[j]=-1;
    }
    }
    printf("%d-%d\n",a[i],count);
    }
    return 0;
}