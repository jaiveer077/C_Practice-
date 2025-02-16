#include<stdio.h>

int main(){
    int r, c;
    int i,j;
    printf("Enter the number of rows in a matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns in a matrix: ");
    scanf("%d", &c);
    int arr[r][c];
    // Taking input 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    // Making the wave pattern in the matrix 
    for(i=0;i<r;i++){
        if(i%2==0){
            for(j=0;j<c;j++){
                printf("%d ", arr[i][j]);
            }
        } else {
            for(j=c-1;j>=0;j--){
              printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}