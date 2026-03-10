#include <stdio.h>
int main() {
for(int i='A'; i<='E'; i++){
   for(int j='A'; j < i+1; j++){
    printf("%c", i);
   } 
   printf("\n");
}
  return 0;
} 