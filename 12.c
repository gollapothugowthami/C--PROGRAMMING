#include <stdio.h>
int main() {
int num;
scanf("%d",& num);
if(num >=-9 && num <=9)
{
 printf("the number is a single-digit");  
}    
else
{
   printf("the number is not a single-digit"); 
}
 return 0;
}