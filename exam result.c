#include <stdio.h>
int main() {
int marks, attendence;
scanf("%d %d",& marks, &attendence);
if(marks < 75)
{
    printf("fail");

}
else if(marks >= 75)
{
    printf("distinction");
}    
else if(marks >= 50 && marks <=74)
{
    printf("pass");
}
else if(marks < 50)
{
    printf("fail");
}
else 
{
    printf("invalid marks");
}
    
    return 0;
}
