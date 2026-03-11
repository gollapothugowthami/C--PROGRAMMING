#include <stdio.h>
int main() {
 //number is palindrome   
int n;
scanf("%d",&n);
int temp=n;
int rev=0;
while (n>0){
 int digit=n%10;
 rev = rev * 10 + digit;
 n=n/10;   
}    
if(rev==temp){
 printf("the %d is palindrome", temp);   
}
else{
   printf("the %d is not palindrome", temp); 
}

    
    return 0;
}