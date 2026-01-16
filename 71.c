#include<stdio.h>
#include<string.h>
    int main()
    {
    char a[50],b[50];
    int i,count1[256]={0},count2[256]={0};
    fgets(a,50,stdin);
    fgets(b,50,stdin);
    if(strlen(a)!=strlen(b)){
        
    }
    for(i=0;a[i];i++){
        count1[a[i]]++;
        count2[b[i]]++;
    }
    for(i=0;i<256;i++){
        if(count1[i]!=count2[i]){
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}