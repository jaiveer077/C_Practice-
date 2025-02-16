#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);
    int i,j;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter element [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nOriginal Matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Transpose the given matrix 
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\nTranspose Matrix\n");
    for(i=0;i<n;i++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    // rotating the matrix by 90 degrees
    for(i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            // swap arr[i][j] and arr[i][k]
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\nRotated Matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}