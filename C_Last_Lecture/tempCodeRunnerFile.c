#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    char op;
    printf("Enter the operation to perform(+,-,/,*): ");
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("%d+%d=%d",n1,n2,n1+n2);
        break;
        case '-':
        printf("%d-%d=%d",n1,n2,n1-n2);