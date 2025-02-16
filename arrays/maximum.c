#include<stdio.h>

int main(){
    int arr[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int minimum = arr[0]; // sabse chota number 
    for(i=0;i<5;i++){
        if(minimum>arr[i]){
            minimum=arr[i];
        }
    }
    printf("The smallest element of the array is %d.\n", minimum);

    return 0;
}