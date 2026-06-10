#include <stdio.h>
int main() {
char string1[80],string2[80];
int i;
printf("Enter a string\n");
printf("?");
scanf("%s",string2);
for(i=0; string2[i]!='\0'; i++)
string1[i]=string2[i];
string [i]='\0';
printf("\n");
printf("%s\n",string1);
printf("number of characters=%d\n",i);  
    
    return 0;
}