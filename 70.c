#include<stdio.h>
int main()
{
    int i,j,count;
    char s[50];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        count=1;
        if(s[i]=='*')
        continue;
    for(j=i+1;s[j]!='\0';j++){
        if(s[i]==s[j]){
        count++;
        s[j]='*';
    }
    }
    printf("%c",s[i]);
    printf("-%d\n",count);
    }
    return 0;
}