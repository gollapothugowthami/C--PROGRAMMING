#include <stdio.h>
int main(){
  FILE*fp;
  int number, quality,i;
  float price,value;
  char item[10], filename[10];
  printf("input filename\n");
  scanf("%s",filename);
  fp=fopen("filename","w");
  printf("input inventory data\n\n");
  printf("item name number price quality\n");
 for(i=1; i<=3; i++)
  {
fscanf(stdin, "%s %d %f %d",item,&number, &price, &quality);
fprintf(fp,"%s %.2f %d",item,number,price, quality);
  }
  fclose(fp);
  fprintf(stdout,"\n\n");
  fp=fopen(filename,"r");
  printf("item name number price quality value\n");
  for(i=1; i<=3; i++)
  {
 fscanf(fp,"%s %.2f %d",item,number,price, quality);
 value=price*quality;
 fprintf(stdout,"%-8s %7d %8.2f %8d %11.2f\n", item, number, price, quality,value);
  }
fclose(fp);
}
    