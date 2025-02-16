#include<stdio.h>

int main(){
    int x, y;
    printf("Enter the value of (x, y): ");
    scanf("%d%d", &x, &y);
    if(x==0 && y==0){
        printf("The point lies on the origin.\n");
    } else if (y==0){
        printf("The point lies on the x-axis.\n");
    } else if (x==0){
        printf("The point lies on the y-axis\n");
    }

    return 0;
}