#include <stdio.h>
int main() 
{
    int DSC, MATHS, ENGLISH, DT, TAMIL, AI; 
    int total;
    int average;
    printf("enter a DSC marks: ");
    scanf("%d", &DSC);
    printf("enter a MATHS marks: ");
    scanf("%d", &MATHS); 
    printf("enter a ENGLISH marks: ");
    scanf("%d", &ENGLISH);
    printf("enter a DT marks: ");
    scanf("%d", &DT);
    printf("enter TAMIL marks: ");
    scanf("%d", &TAMIL); 
    printf("enter a AI marks: ");
    scanf("%d", &AI);
    total = DSC + MATHS + ENGLISH + DT + TAMIL + AI ;
    average = total / 6 ;
    printf("total=%d\n", total);
    printf("average=%d\n", average); 

    return 0; 
}