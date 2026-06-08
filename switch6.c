#include <stdio.h>
int main() {
float value1, value2;
char operator;
printf("type in your expressoion\n");
scanf("%f %c %f", &value1, &value2, &operator);
switch(operator)
{
    case'+':
    printf("%f\n", value1+value2);
   case'-':
    printf("%f\n", value1-value2);
       case'*':
    printf("%f\n", value1*value2);
       case'/':
    if(value2==0)
    printf("division by zero.\n");
    else
    printf("%f\n", value1/value2);
    defalut:
    printf("unknown operator\n");
    break;
    }
}    
    