#include <stdio.h>
int main() {
int marks;
printf("enter marks(0 -100):");
scanf("%d",& marks);
if(marks<0||marks>100)
{
 printf("invalid marks\n");   
}
else if(marks >=90)
{
 printf("Grade:A\n");   
}
else if(marks >=80)
{
 printf("Grade:B\n");   
}
else if(marks >=70)
{
 printf("Grade:C\n");   
}
else if(marks >=60)
{
    printf("Grade:D\n");
}
else 
{
 printf("Grade:F\n");
}
    
 return 0;
}