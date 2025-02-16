#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int i,j,a[n];
    for(i=0;i<n;i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("\nArray before sorting\n");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    // Insertion sort
    for(i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && a[j-1]>a[j]){
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    printf("\nArray after sorting\n");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}