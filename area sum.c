#include <stdio.h>
int main() {
/*Calulating Area of a circle */
/*Formula is pi*(r)*/
float pi = 3.14519;
int r;
float area;
printf("What is the radius?:");
scanf("%d",& r);
area = pi*r*r;   
    
    return 0;
}