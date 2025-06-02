#include<stdio.h>

int main(){
    int a;
    printf("Enter the first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the second number: ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d", b);
    return 0;
}