#include<stdio.h>
int main()
{
    int n,i,a[50],key,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
      if(a[i]==key)
      {
        found=1;
        break;
      }
    }
    if(found)
    printf("found");
     else
     printf("Not found");
     return 0;
}