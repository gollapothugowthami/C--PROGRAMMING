#include <stdio.h>
int main() {
int length;
scanf("%d", & length);
printf("%d", length);
if(length > 8)
{
    printf("strong password");
}  
else 
{
    printf("weak password");
}  
  return 0;
}
