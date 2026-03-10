#include <stdio.h>
int main() {
int i,j; 
//increasing part(2 to 5)   
for(i = 2; i <= 5; i++){
 for(j=1; j <= i; j++){
    printf("*");
 } 
 printf("\n");
}
//decreasing part(4 to 1)
 for(i=4; i >= 1; i--){
  for(j=1; j <= i; j++){
    printf("*");
  }
    printf("\n");
  }  
   
 return 0;
}