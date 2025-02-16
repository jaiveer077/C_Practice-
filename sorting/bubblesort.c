#include<stdio.h>

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
    // Bubble sort
    for(i=0;i<n-1;i++){ // n-1 is the number of passes
        for(j=0;j<=n-2;j++){
           if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
           }
        }
    } 
    printf("\nArray after sorting\n");
    for(j=0;j<n;j++){
        printf("%d ", arr[j]);
    }
    return 0;
}