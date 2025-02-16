#include<stdio.h>

int main(){
    int i, x;

    printf("Enter a number: ");
    scanf("%d", &i);

    if(i < 0){
        x = (-1) * i;
    } 

    printf("The absolute value of %d is %d.\n", i, x);

    return 0;
}