#include <stdio.h>
int main() {
 char ch;
 scanf("%c",& ch);
 if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))   
 {
    printf("the character is an alphabet");
 }
 else
 {
    printf("the character is not an alphabet");
 }
   return 0;
}