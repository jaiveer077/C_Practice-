#include<stdio.h>

int main(){
    int i;
    int arr[4][2];
    for(i=0;i<4;i++){
        printf("Enter the roll number for the student %d: ", i+1);
        scanf("%d", &arr[i][0]);
        printf("Enter the marks for the student %d: ", i+1);
        scanf("%d", &arr[i][1]);
    }
    for(i=0;i<4;i++){
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
    return 0;
}