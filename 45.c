#include <stdio.h>
int main() {
    int n, i; 
    float sum = 0, average;
    printf("enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:\n");
    for(i = 0; i <n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / n;
    printf("average of array elements = %.2f\n", average);
    
    return 0;
}