#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c){
        printf("%d is the greatest of three.\n", a);
    }
    else if (b > a && b > c){
        printf("%d is the greatest of three.\n", b);
    } else if(c > a && c > b){
        printf("%d is the greatest of three.\n", c);
    }

    return 0;
}