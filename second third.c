#include <stdio.h>
int main() {
    int n;
printf("enter the number:");-
scanf("%d",&n);
int Thousand=n / 1000;
printf("The Thousand digit :%d\n",Thousand);
int Third= n/ 100;
int Hundred= Third % 10;
printf("The Third digit :%d\n",Hundred);
int num= n % 10;
int Once= num % 10;
printf("The Once place is :%d\n",Once);
int Tens= n/ 10;
int Ten= Tens % 10;
printf("The Tenth digit is :%d\n",Ten);

    
    return 0;
}