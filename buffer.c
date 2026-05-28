#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#define Null 0
int main() {
char*buffer;
/*Allocating memory*/
if((buffer=(char*)malloc(10))==Null)
{
    printf("malloc falid.\n");
    exit(1);
}    
printf("Buffer of size %d created \n",_msize(buffer));
strcpy(buffer,"HYDERABAD");
printf("\nBuffer contains:%s\n", buffer);
/*Real location*/
if((buffer=(char*)realloc(buffer,15))==Null)
{
    printf("Reallocation falied");
    exit(1);
}
printf("\n buffer size modified.\n");
printf("\n butter still contains:%s\n", buffer);
strcpy(buffer,"SECUNDERABAD");
printf("\n buffer now contains:%s\n", buffer);
/*Freeing memory*/
free(buffer);
}

