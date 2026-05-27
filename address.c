#include <stdio.h>
int main() {
    char a;
    int x;
    float p,q;
    a='A';
    x=125;
    p=10.25,q=18.76;
    printf("%c is stored at addr %u.\n",a,&a);
    printf("%d is stored at addr %u.\n",a,&x);
    printf("%f is stored at addr %u.\n",a,&p);
    printf("%f is stored at addr %u.\n",a,&q);
printf("%c is stored at addr %u.\n",o,&a);
    printf("%d is stored at addr %u.\n",o,&x);
    printf("%f is stored at addr %u.\n",o,&p);
    printf("%f is stored at addr %u.\n",o,&q);