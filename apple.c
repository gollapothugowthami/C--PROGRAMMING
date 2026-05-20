#include <stdio.h>
int main() {
/* understand the size of variable*/    
int A;
char B;
float C;
long D;
double E;
unsigned int F;    
printf("The size of integer= %d BYTES \n\n", sizeof(A));
printf("The size of charecter is %d BYTES \n\n",sizeof(B));
printf("The size of float is %d BYTES \n\n", sizeof(C));
printf("The size of long is %d BYTES \n\n", sizeof(D));
printf("The size of double is %d BYTES \n\n", sizeof(E));
printf("The size of unsigned is %d BYTES \n\n", sizeof(F));

    
    return 0;
}