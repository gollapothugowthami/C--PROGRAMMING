#include <stdio.h> 

int main() { 
char source[100],
 destination;
 int i = 0;
printf("enter a string:");
fgets(source, sizeof(source),stdin);
/*copy string */
while(source[i] != '\0'){
    destination[i] = source[i];
    i++;
}
destination[i] = '\0';//Add null terminator
printf("source string: %s", source);
printf("copied string : %s", destination);    
    
    return 0;
}