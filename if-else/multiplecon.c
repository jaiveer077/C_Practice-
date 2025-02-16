#include<stdio.h>

int main(){
    int x;

    printf("Enter a positive three digit number: ");
    scanf("%d", &x);

    if (x < 0){
        printf("Please enter a valid positive integer.\n");
    }

    if (x < 1000 && x > 99){
        printf("You have entered a three digit number.\n");
    } else {
        printf("You have not entered a three digit number.\n");
    }


    return 0;
}