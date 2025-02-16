#include<stdio.h>

int main(){
    int n, i, sum=0;
    int arr[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for(i=0;i<n-1;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++){
        sum += arr[i];
    }
    printf("The sum of the elements of the array is %d.\n", sum);
    return 0;
}