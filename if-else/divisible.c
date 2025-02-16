#include<stdio.h>

int main(){
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 5 == 0 && x % 3 == 0){
        printf("The number is divisible by 5 and 3.\n");
    } else {
        printf("The number is not divisible nby 5 and 3.\n");
    }

    return 0;
}