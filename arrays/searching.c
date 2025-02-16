#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int i,arr[n],x;
    int index=-1;
    for(i=0;i<n;i++){
        printf("Enter element[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("\nArray\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element you want to search for: ");
    scanf("%d", &x);
    bool flag=false;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
            index=i;
            break;
        }
    }
    if(flag==true){
    printf("\n%d is present in the array at position %d\n",x,index+1);
    } else {
        printf("\n%d is not present in the array",x);
    }
    return 0;
}