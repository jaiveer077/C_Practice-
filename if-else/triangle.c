#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c && (b + c) > a && (a + c) > b){
        printf("%d, %d and %d are the three sides of the triangle.\n", a, b, c);
    } else {
        printf("%d, %d and %d are invalid sides of the triangle.\n", a, b, c);
    }

    return 0;
}