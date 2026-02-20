#include <stdio.h>
int main() {
int n, i, count = 0;
printf("enter the number of elements:");
scanf("%d", &n);
int arr[n];
printf("enter the elements:\n");
for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    if(arr[i] > 0){
    count++;
    }
}

  printf("number of positive elements = %d\n", count);  
    return 0;
}
