#include <stdio.h>
#include <string.h>
int main() {
  char str[100];
  int i, len, ispalindrome = 1;
  printf("enter a string: ");
  fgets(str, sizeof(str), stdin);
  // Remove new line character if present
  str[strcspn(str, "\n")] = '\0';
  len = strlen(str);
  for(i = 0; i < len / 2; i++){
    if(str[i] != str[len - i - 1]){
        ispalindrome = 0;
        break;
    }
  }  
  if(ispalindrome)
  printf("The string is a palindrome. \n");
  else
  printf("The string is not a palindrome. \n");
 return 0;
}