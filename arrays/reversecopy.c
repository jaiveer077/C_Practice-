#include<stdio.h>

int main(){
    int n;
    int i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int reversed[n];
    for(i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        reversed[i]=arr[n-1-i];
        printf("%d ", reversed[i]);
    }
    return 0;
}