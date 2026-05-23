#include <stdio.h>
#define COLMAX10
#define ROWMAX12
 {
int row, column, y;
row==1;
printf("Multiplycation table \n");
printf("===========================\n");
do /* outer loops starts*/
column == 1;
do /*Inner loops starts*/
{
    y= row*column;
   printf("%5d",y);
   column = column + 1;

}
while[column <= colmax];  /*inner loop*/
printf("/n");
row = row+1;
}
while[row <= Row max];
printf("============================");
 
    
    return 0;
}