#include <stdio.h>
int main(){
    int a;
    //printf("enter the number:  ");
    scanf(" %d",&a);
    printf("you enter the num is =%d\n",a);
    int b;
    scanf("%d",&b);
    printf("you enteres number is :%d\n",b);
float c;
scanf("%f",&c);
printf("you entered the decimal value is :%.2f\n\n",c);
int d=a+b+c;
printf("the adding of these three numbers id:%d\n\n",d);
int e=a-b-c;
printf("the subtracting of these three numbers is: %d\n\n",e);
int f=a*b/c;
printf("the value of these three numbers is: %d\n\n",f);
int h=e/f*d;
printf("the value of this is%d\n",h);
char g;
scanf("%c",&g);
printf("the character you entered is :%c\n",g);
char var[59];
scanf("%s",var);
printf("you entered the name :%s\n ",var);
char arr[60];
scanf("%s",arr);
printf("you entered the name is in : %s\n",arr);
    return 0;
}