#include<stdio.h>
int main(){
    char i,j,n;
    scanf("%c",&n);
    for (i='A';i<=n;i++) {
        for (j='A';j<i+1;j++) {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}
