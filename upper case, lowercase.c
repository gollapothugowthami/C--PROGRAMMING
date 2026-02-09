#include <stdio.h>
int main(){
  char ch;
  scanf("%c",& ch);
  if(ch>='A' && ch<='Z')
  {
    printf("the character is uppercase");
  }
  else if(ch>='a' && ch<='z')
  {
    printf("the charecter is lowercase");
  }
  else
  {
    printf("the character is not an alphabet");

  }

   
    return 0;
}


