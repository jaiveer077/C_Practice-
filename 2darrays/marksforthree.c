#include<stdio.h>

int main(){
    int r;
    printf("Enter the number of students: ");
    scanf("%d", &r);
    int arr[r][3];
    int i;
    for(int i=0;i<r;i++){
        printf("Enter the marks in chemistry for the student %d: ", i+1);
        scanf("%d", &arr[i][0]);
        printf("Enter the marks in physics for the student %d: ", i+1);
        scanf("%d", &arr[i][1]);
        printf("Enter the marks in mathematics for the student %d: ", i+1);
        scanf("%d", &arr[i][2]);
    }
    for(i=0;i<r;i++){
        printf("PHYSICS:%d\tMATHEMATICS:%d\tCHEMISTRY:%d\n", arr[i][0], arr[i][1], arr[i][2]);
    }
    return 0;
}