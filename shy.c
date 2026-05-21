#include <stdio.h>
int main() {
int A, B, C;
printf("ENTER A NUMBER:");
scanf("%d",&A);
printf("ENTER ANOTHER NUMBER:");
if(A>B)
printf("A=%d and B =%d-- therfore A is Greater than B", A,B); 
else if(A<B)  
printf("A=%d and B =%d-- therfore A is smaller than B", A,B); 
else
   printf("A=%d and B =%d-- therfore A is A&B  are equal", A,B); 
    return 0;
}