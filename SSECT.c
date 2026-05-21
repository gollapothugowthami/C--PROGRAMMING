#include <stdio.h>
int main() {
     int A= 0;
 SSCET:
 {
    printf("A = %d:\n", A);
 }
    A+=2;
 goto SSCET;


    
    return 0;
}