#include <stdio.h>
int main() {
    int num,reversed=0,remainder;
    printf("enter an integer");
    scanf("%d",& num);
    while(num ! = 0){
      remainder = num% 10;
      reversed = reversed * 10 +remainder;
      num=num/10;
    }
    printf("reversed number = %d\n",reversed);  
      return 0;
}