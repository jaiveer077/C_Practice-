#include <stdio.h>

int main() {
    int r, c;
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    // Taking input for the matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // Creating the wave pattern (column-wise swapping)
    for(j=0;j<c;j++){  
        if(j%2==0){ // Swapping the elements in the evenn indexed columns 
            int i=0,k=r-1;
            while (i < k) {
                int temp = arr[i][j];
                arr[i][j] = arr[k][j];
                arr[k][j] = temp;
                i++;
                k--;
            }
        }
    }
    // Printing the wave-transformed matrix
    printf("\nWave Pattern Matrix:\n");
    for(i=0;i<r;i++) {
        for (j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
