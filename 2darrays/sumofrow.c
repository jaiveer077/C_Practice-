#include<stdio.h>

int main(){
    int r, c;
    int i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]); 
        }
    }

    int max_sum = -1, row_index = -1;
    // Finding the row with maximum sum 
    for(int i=0;i<r;i++){
        int sum = 0; // Reset the sum for each row 
        for(int j=0;j<c;j++){
           sum += arr[i][j];
        }
        if (sum>max_sum){
            max_sum = sum;
            row_index = i+1;
        }
    }
    printf("%d is the number of row having maximum sum as %d\n", row_index, max_sum);
    return 0;
}