#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int i,j,arr[n];
    for(i=0;i<n;i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    int sum;
    printf("Enter the required sum: ");
    scanf("%d", &sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
               count++;
               printf("(%d,%d)\n", arr[i],arr[j]);
            }
        }
    }
    printf("%d", count);
    return 0;
}