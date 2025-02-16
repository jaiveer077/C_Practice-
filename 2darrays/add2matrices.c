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
    int arr3[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr3[i][j] = (arr1[i][j]+arr2[i][j]);
        }
    }
    printf("The sum of the above two matrices will be: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}