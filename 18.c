#include <stdio.h>
int main() {
int N,i;
printf("enter a number:");
scanf("%d",&N);
for(i = 2; i<=N; i+=2){
 printf("%d", i);   
}    
      return 0;
}