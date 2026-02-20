#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum=0,num=0,digit;
    char s[50];
    scanf("%s",s);
    for(i=0;i<s[i]!='\0';i++){
        digit=s[i]-'0';
    num=num*10+digit;
    sum= sum+digit*digit*digit;
    }
    if(sum==num)
    printf("Amstrong");
    else
    {
        printf("Not Amstrong");
    }
}
