#include <stdio.h>
int main() {
 char *name;
 int length;
 char*cptr=name;
 name="DELHI";
printf("%s\n",name);
while(*cptr!='\0')
{
printf("%c is stored at address %u\n",*cptr,cptr);

}
length=cptr-name;
printf("\n length of the string -%d\n", length);
    
    return 0;
}