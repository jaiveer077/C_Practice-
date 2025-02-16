#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ", a[i]);
    }
    return 0;
}