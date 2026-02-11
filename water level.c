#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
if(n >= 90)
{
    printf("overflow warning");

}    
    else
    {
        printf("safe warning");
    }
    
    return 0;
}
