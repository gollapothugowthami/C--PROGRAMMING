#include <stdio.h>
int main() {
int salary;
scanf("%d", & salary);
printf("%d", salary);
if(salary > 30000)
{
  printf("bonus eligible");  
}
else if
  (salary < 2800) 
  {
    printf("not eligible");
}
 return 0;
}
