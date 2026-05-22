#include <stdio.h>
int main() {
    char oper;
    double first_number,second_number;
    printf("Enter the opertor(+,-,*,/):");
    scanf("%c",&oper);
    printf("Enter the First Number : \n");
    scanf("%lf",&first_number);
    printf("Enter the Second Number : \n");
    scanf("%lf",&second_number);
    switch(oper){
        case'+':
        printf("%.1lf+%.1lf+=%.1lf",first_number,second_number,first_number+second_number);
        break;
        case'-':
        printf("%.1lf-%.1lf+= %.1lf",first_number,second_number,first_number-second_number);
        break;
        case'*':
        printf("%.1lf*%.1lf+= %.1lf",first_number,second_number,first_number*second_number);
        break;
        case'/':
        printf("%.1lf/%.1lf+=%.1lf",first_number,second_number,first_number/second_number);
        break;
        // case'%':
        // printf("%.1lf%.1lf+=%.1lf",first_number,second_number,first_number%second_number);
        // break;
        default:
        printf("use only proper operators");
        break;

            }

    
    return 0;
}