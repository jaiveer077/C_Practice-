#include<stdio.h>

int main(){
    int m,p,q,n;
    printf("Enter the number of rows of first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &n);
    printf("Enter the number of rows of second matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns of second matrix: ");
    scanf("%d", &q);
    int i,j;
    int arr1[m][n];
    int arr2[p][q];
    printf("\nFirst Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element [%d][%d]: ", i,j);
            scanf("%d", &arr1[i][j]); 
        }
    }
    printf("\nSecond Matrix\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("Enter element [%d][%d]: ", i,j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int res[m][q];
    if(n==p){
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
        // i row of a[][] and j column of b
        // (am[i][0],a[i][1],a[i][2],____) * (b[0][j],b[1][j],b[2][j],______)
        res[i][j] = 0;
            for(int k=0;k<n;k++){
            res[i][j] += arr1[i][k]*arr2[k][j];
            }
        }   
    }   
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
} else {
    printf("Matrices cannot be multiplied!");
}
    return 0;
}