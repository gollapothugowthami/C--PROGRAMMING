#include<stdio.h>
int main()
{
    int vehicletype,trips,ammount = 0;
    scanf("%d %d",&vehicletype,&trips);
    switch(vehicletype){
        case 1:
        if(trips==1){
        ammount = 100;
        }
        else if(trips>=2 && trips<=30){
        ammount = 800;
        }
        break;
        case 2:
        ammount = trips * 240;
        break;
        default:
        printf("Invalid vehicle type");
    }
    printf("%d",ammount);
    return 0;
}
