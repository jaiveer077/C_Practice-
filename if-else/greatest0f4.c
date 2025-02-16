#include<stdio.h>

int main(){

    int a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d){
        printf("%d is the greatest of four.\n", a);
    } else if (b > a && b > c && b > d){
        printf("%d is greatest of the four.\n", b);
    } else if (c > a && c > b && c > d){
        printf("%d is the greatest of four.\n", c);
    } else if(d > a && d > b && d > c){
        printf("%d is greatest of the four.\n", d);
    }

    return 0;
}