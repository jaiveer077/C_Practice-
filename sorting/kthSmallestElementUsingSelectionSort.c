#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n],i,j;
    for(i=0;i<n;i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("\nArray before sorting\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    // Selection Sort
    int number;
    printf("\nInput the number of smallest element you want to find: ");
    scanf("%d", &number);
    for(i=0;i<n-1;i++){
        int minimum = INT_MAX;
        int index=-1;
        for(j=i;j<=n-1;j++){  // to keep on moving in the unsorted array
           if(minimum>arr[j]){
            minimum=arr[j];
            index=j;
           }
        }
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
    }
    // printf("\nArray after sorting\n");
    // for(i=0;i<n;i++){
    //     printf("%d ", arr[i]);
    // }
    int requiredOutput;
    for(i=0;i<n;i++){
        requiredOutput=arr[number-1];
    }
    printf("\nThe %dth smallest element in the array is %d\n", number, requiredOutput);
    return 0;
}