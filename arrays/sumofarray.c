#include<stdio.h>

int main(){
    int arr[5];
    int i, sum=0;
    for(i=0;i<5;i++){
        scanf("%d", &arr[i]);
    } 
    for(i=0;i<5;i++){
        sum += arr[i];
    }
    printf("The sum of the elements of the array is %d.\n", sum);

    return 0;
}