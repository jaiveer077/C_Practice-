#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5],i;
    int max=INT_MIN;
    int smax=INT_MIN;
    for(i=0;i<5;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<5;i++){
        if(max<arr[i]){
            smax=max; // smax is now previous max
            max=arr[i]; // max is now a new max
        }
        else if(smax<arr[i] && max!=arr[i]){ // max>arr[i]
            smax=arr[i];
        }
    }
    printf("The second greatest element in the array is %d.", smax);
    return 0;
}