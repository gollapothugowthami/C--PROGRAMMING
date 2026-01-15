#include <stdio.h>
#include <ctype.h>
int main() {
   char str[100];
   int i = 0;
   printf("enter a string: ") ;
   fgets(str, sizeof(str), stdin);
   while(str[i] != '\0'){
    str[i] = tolower(str[i]);
    i++;
   }
   printf("lowercase string: %s",str);
    //Your Code goes here!
    
    return 0;
}