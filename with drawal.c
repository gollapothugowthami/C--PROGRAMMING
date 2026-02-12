#include <stdio.h>
int main() {
int account type, balance, withdrawal amount;
scanf("%d %d %d", & accounttype, & balance,& withdrawal amount);
switch (account type){
 case 1:   
if(balance >= withdrawal amount)
{
    printf("transaction succesfull");
}
break;
case 2:
 if(withdrawal amount == 5000)
{
    printf("transaction succesfull");

}
break;
else 
{
    printf("limit exceed")
}
break;
     return 0;
}
