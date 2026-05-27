#include <stdio.h>
int main() {
  int a, b;
  int *p1, *p2;
  char c, d;
  char *p3, *p4;
  float e, f;
  float *p5, *p6;
  printf("The address of a%v and b%v",&a,&b);   /*Now the address of a and b is*/
    /*in incrementing pointers*/
    p1++;
    p2++;
   printf("The address of a%v and b%v",&a,&b);
   ++p;
   p1=p1+1;
   printf("The address of a%v and b%v",&c,&d);
    return 0;
}