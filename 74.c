#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50];
    int i,j;
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    c[i][j]=a[i][j]+b[i][j];
    printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    return 0;
    }