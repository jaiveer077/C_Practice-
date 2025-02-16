#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int i;
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    int sumn=(n*(n+1))/2;
    int sum=0;
    for(i=0;i<n;i++){
       sum=sum+arr[i];
    }
    int duplicate=sumn-sum;
    printf("The duplicate element is %d", duplicate);
    return 0;
}