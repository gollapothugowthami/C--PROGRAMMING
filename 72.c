#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,temp;
    char s[50];
    scanf("%s",s);
    for(i=0;i<s[i]!='\0';i++)
    for(j=i+1;j<s[j]!='\0';j++)
    {
        if(s[i]>s[j]){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    }
    printf("%s",s);
    return 0;
}