#include<stdio.h>

int main(){
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr1[r][c], arr2[r][c];
    printf("MATRIX ONE :)\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("MATRIX TWO :)\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr2[i][j] = (arr1[i][j]+arr2[i][j]);
        }
    }
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
         printf("%d ", arr2[i][j]);
       }
       printf("\n");
    }
    return 0;
}