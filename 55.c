#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            count++;

        }
    }
    printf("number of spaces in the string: %d\n", count);
    
 return 0;
}