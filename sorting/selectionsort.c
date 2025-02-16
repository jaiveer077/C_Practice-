#include<stdio.h>
#include<limits.h>

int main(){
    int n,i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("\nArray before sorting\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    // Selection Sort
    for(i=0;i<n-1;i++){ // n-1 is the number of passes
        int minimum = INT_MAX;
        int index = -1;
        for(j=i;j<=n-1;j++){
            if (minimum>arr[j]){
                minimum = arr[j];
                index = j;    
            }
        }
        int temp = arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
    }
    printf("\nArray after sorting\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}