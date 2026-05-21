#include <stdio.h>
int main() {
int A, B, Result;
char OPERATION;
printf("Enter a value for A:");
scanf("%d",&A);
printf("/n");    
printf("Enter a value for B:");
scanf("%d",&B);
printf("/n"); 
printf("Enter a OPERATION:");
scanf("%c",& OPERATION);
if(OPERATION == '+')
{
    Result = A+B;

printf("A = %d %c %d = %d", A, OPERATION, B, Result);
}
    
    return 0;
}