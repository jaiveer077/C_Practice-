#include<stdio.h>

int main(){
    int arr[5];
    int i;

    for(i=0;i<5;i++){
        printf("Enter the marks for the student %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]<35){
          printf("%d\n", i);
        }else if (arr[i]<0){
            printf("hello!");
        }
    }

    return 0;
}