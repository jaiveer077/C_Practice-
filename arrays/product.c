#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i, product=1;
    for(i=0;i<10;i++){
    product *= arr[i];
    }
    printf("The product of the element of the array is %d", product);

    return 0;
}