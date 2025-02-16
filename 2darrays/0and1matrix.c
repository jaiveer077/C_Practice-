#include<stdio.h>

int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("Enter the matrix entries in 0s and 1s only\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    int i,j;
    int max = -1, rowNumber = -1;
    for(i=0;i<r;i++){
        int count=0;
    for(j=0;j<c;j++){
        if(arr[i][j]==1){
            count++;
        }
        if(max<count){
            max=count;
            rowNumber = i+1; 
        }
    }
}
    printf("The row having maximum number of 1s is %d\n", rowNumber);
    return 0;
}