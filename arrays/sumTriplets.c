#include<stdio.h>

int main(){
    int arr[6], i, j, k, n,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=0;i<6;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            for(k=j+1;k<6;k++){
                if(arr[i]+arr[j]+arr[k]==n){
                    count++;
                    printf("(%d,%d,%d)", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("The number of pairs are: %d", count);
    return 0;
}