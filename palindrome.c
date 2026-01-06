#include <stdio.h>
int main() {
int num, original, reversed = 0, remainder;
scanf("%d",& num);
original = num;
while(num!=0){
 remainder = num % 10;
reversed= reversed *10 + remainder;
num /= 10;
}
if (original == reversed)
{
printf("the number is an palindrome.\n");
}
else
{
printf("the number is not an palindrome.\n");
}


    
    return 0;
}