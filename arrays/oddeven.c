#include<stdio.h>

int main(){
    int arr[6];
    int i;
    for(i=0;i<6;i++){
    printf("Enter the element %d: ", i+1);
    scanf("%d", &arr[i]);
    }

    for(int i=0;i<6;i++){
        if(i%2!=0){
            arr[i]=arr[i]*2;
        } else if (i%2==0){
            arr[i]=arr[i]+10;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}