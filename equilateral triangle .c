#include <stdio.h>
int main() {
int a, b, c;
scanf("%d %d %d", &a, &b,&c);
if(a==b && b==c && c==a)
{
    printf("equilateral triangle");
}  
else
{
  printf("not an equilateral triangle");  
}  
 return 0;
}
