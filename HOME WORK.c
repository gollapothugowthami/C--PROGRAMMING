#include <stdio.h>
int main() {
int  A= 26;
int ONES_DIGIT, TENS_DIGIT;
ONES_DIGIT = A % 10;
printf("The ONES_DIGIT =%d\n", ONES_DIGIT);  
TENS_DIGIT = A / 10;
printf("The TENS_DIGIT =%d\n", TENS_DIGIT);  

    
    return 0;
}