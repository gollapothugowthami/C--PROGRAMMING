#include <stdio.h>
#include <ctype.h>
int main() {
char str[100];
int count = 0, i;
printf("enter a string: ");
fgets(str, sizeof(str), stdin);
for(i = 0; str[i] != '\0'; i++){
    char ch = str[i];
    if(isalpha(ch)){ // check if character is a letter
        ch = tolower(ch);
        if(ch != 'a'&& ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            count++;
    }
      
    }  
}  
printf("number of consonants: %d\n", count); 

    
    return 0;
}
















