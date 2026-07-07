#include <stdio.h>
int main() {
FILE*f1;
char c;
printf("data input\n\n");
/*open the file input*/
f1=fopen("input", "w");
/*Get a character from keyboard*/
while((c=getchar())!=EOF)
/*write a character to input*/
putc(c,f1);
/*close the file input*/
fclose(f1);
printf("\ndata output\n\n");
/*Reopen the file input*/
f1=fopen ("input","r");
/*Read a character from input*/
while((c=getc(f1))!=EOF)
/*display a character on screen*/
printf("%c",c);
/*close the file input*/
fclose(f1);
}
    
