#include<stdio.h>
int main()
{
    int code,experience,salary=0,bonus=0;
    scanf("%d %d",&code,&experience);
    switch(code){
        case 1:
        salary = 50000;
        break;
        case 2:
        salary =35000;
        break;
        default:
        printf("Invalid code");
    }
    if(experience >= 3)
    bonus = experience * 5000;
    salary = salary + bonus;
    printf("%d",salary);
    return 0;
}
