#include <stdio.h>
int main() {
int arr[100], n, i, j, temp;
// Input number of elements
printf("enter number of elements:");
scanf("%d", &n);
// Input artray elements
for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);

}
// Bubble sort for desending order
for(i = 0; i < n - 1; i++){
    for(j = 0; j < n - 1; j++ ){
        if(arr[j] < arr[j + 1]){
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
// Output sorted array

printf("array in descending order\n");
for(i = 0; i < n; i++){
    printf("%d", arr[i]);
}
    
    return 0;
}