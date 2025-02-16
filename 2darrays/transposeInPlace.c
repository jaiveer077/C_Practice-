#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);
    int i,j;
    int arr[n][n]; // total n*n elements
    // input elements of the array 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Original Matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // transpose
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            // swapping arr[i][j] and arr[j][i]
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\nTranspose Matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}