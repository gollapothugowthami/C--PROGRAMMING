#include <stdio.h>
int main() {
    int n, i;
    int largest, secondlargest;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements:\n");
    for(i = 0; i < n; i++){
    scanf("%d", &arr[i])
    }
    // Intilialise largest and second largest
    largest = secondlargest = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > largest){
        secondlargest = largest;
        largest = arr[i];
        }
        else if (arr[i] >secondlargest &&arr[i] != largest){
            secondlargest = arr[i];

        }    
    }

    if(largest == secondlargest){
 printf("there is no second largest element.\n");
    }else{
     printf("the second largest element is:%d\n", secondlargest);
    }
    
return 0;
}