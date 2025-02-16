#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i,j;
    i=0,j=9;
    int target=10;
    while(i<j){
          if(arr[i]+arr[j]==target){
            printf("%d %d equals to the target in the array", arr[i], arr[j]);
            break;
          }
          if(arr[i]+arr[j]>target){
            j--;
          }
          if(arr[i]+arr[j]<target){
            i++;
          }
    }
    return 0;
}