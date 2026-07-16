#include<stdio.h>
int main()
{
    int code,age,premium = 0;
    scanf("%d %d",&code,&age);
    switch(code)
    {
        case 1:
        if(age <= 5){
           premium = 1500;
        }
        else{
            premium = 2500;
        }
        break;
        case 2:
        if(age <= 5){
            premium = 4000;
        }
        else{
            premium = 6000;
        }
        break;
        default:
        printf("Invaild code");
    }
    printf("%d",premium);
    return 0;
}
