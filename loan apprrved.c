#include<stdio.h>
int main()
{
    int loantype,creditscore;
    scanf("%d %d",&loantype,&creditscore);
    switch(loantype)
    {
        case 1:
        if(creditscore >= 700){
            printf("Approved");
        }
        else if(creditscore >= 650 && creditscore <= 699){
        printf("Manual Review");
        }
        break;
        case 2:
        if(creditscore >= 700){
        printf("Approved");
        }
        else{
        printf("Rejected");
        }
        break;
        default:
        printf("Invalid Loan type");
    }
    return 0;
}
