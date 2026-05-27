#include <stdio.h>
int main() {
int *p, sum, i;
int x[5]={5,9,6,3,7};
i = 0;
p=x;    
/*initialing with base address ofx*/
printf("Element value Address\n\n");
while(i<5){
 printf("x[%d]%d %u\n", i,*p, p);
 sum=sum+*p;     
  /*accessing array element*/
 i++, p++;       
 /*incrementing pointer*/   
}
printf("\n sum= %d\n", sum);
printf("\n &x[0] = %u\n",&x[0]);
printf("\n p = %u\n",p);



    
    return 0;
}