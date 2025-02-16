#include<stdio.h>

int main(){
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int i,j;
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
    int brr[c][r]; // Now printing the transpose of the matrix 
    for(i=0;i<c;i++){ // row becomes column
        for(j=0;j<r;j++){ // column becomes row
            brr[i][j] = arr[j][i];
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}