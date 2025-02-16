#include<stdio.h>

int main(){
    int arr[5];
    int i, x, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(i=0;i<5;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("The number of array elements greater than %d is %d.", x, count);
    return 0;
}