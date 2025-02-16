#include<stdio.h>

int main(){
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
          sum += arr[i][j];
       }
    }
    printf("The sum of the given matrix is %d.\n", sum);

    return 0;
}