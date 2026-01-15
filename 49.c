#include <stdio.h>
int main() {
char str[100];
int i, length = 0, temp;
printf("enter a string:");
fgets(str, sizeof(str), stdin);
//find length of the string
while(str[length] != '\0' && str[length] != '\n'){
    length++;
} 
//Reverse the string
for(i = 0; i < length / 2; i++){
    temp = str[i];
    str[i] = str[length - i -1];
    str[length - i - 1] = temp;
} 
printf("Reversed string: %s", str);  
    //Your Code goes here!
    
    return 0;
}