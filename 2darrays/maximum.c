#include<stdio.h>

int main(){
    int maxRow=0, maxCoulmmn=0;
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int maximum = arr[0][0];
    int minimum = arr[0][0];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]>maximum){
                maximum=arr[i][j];
                maxRow=i;
                maxCoulmmn=j;
            }
            if(arr[i][j]<minimum){
                minimum=arr[i][j];
            }
        }
    }
    printf("The maximum value of the array is %d at [%d][%d]\n", maximum, maxRow, maxCoulmmn);
    printf("The minimum value of the array is %d", minimum);
    return 0;
}