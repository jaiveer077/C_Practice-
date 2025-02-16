#include<stdio.h>
#include<stdbool.h>

int main(){
    int i,j,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element[%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        bool flag=true;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=false;
            }
        }
        if(flag==true){
            printf("%d is the unique element.\n", arr[i]);
            break;
        }
    }
    return 0;
}