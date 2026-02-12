#include<stdio.h>
int main()
{
    int roomtype;
    char season;
    scanf("%d", &roomtype);
    scanf(" %c", &season);
    switch(roomtype){
        case 1:
        switch(season){
        case 'A':
        printf("₹2500");
        break;
        case 'B':
        printf("₹2000");
        break;
        default:
        printf("Invalid season");
    }
    break;
    case 2:
    switch(season){
    case 'C':
    printf("₹4000");
    break;
    case 'D':
    printf("₹3000");
    break;
    default:
    printf("Invalid season");
    }
    break;
    default:
    printf("Invalid Room Type");
    }
    return 0;
}
