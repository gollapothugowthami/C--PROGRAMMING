#include <stdio.h>
int main(){
long n;    
 scanf("%d",&n);
 int sum = 0;
 while(n!=0){
 int rem = n % 10;
 sum = sum + rem;
 n/=10 ; 
 
  printf("%d", rem); 
} 
    return 0;
}