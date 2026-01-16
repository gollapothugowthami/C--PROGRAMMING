#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],word[50],small[50],large[50];
    int i=0,j=0;
    fgets(s,50,stdin);
    while(1){
        if(s[i]==' ' || s[i]=='\0'){
            word[j]='\0';
            if(strlen(word)<strlen(small)||small[0]=='\0')
            strcpy(small,word);
            if(strlen(word)>strlen(large))
            strcpy(large,word);
            j=0;
            if(s[i]=='\0')
            break;
        }
        else{
            word[j++]=s[i];
        }
        i++;
    }
    printf("largest : %s",large);
    printf("smallest :%s",small);
    return 0;
}