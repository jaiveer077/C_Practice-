#include<stdio.h>

int main(){
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c]; // total r*c elements 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}