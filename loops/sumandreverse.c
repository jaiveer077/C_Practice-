#include<stdio.h>

int main(){
    int n, digit;
    int sum=0, reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
    reverse=reverse*10;
    reverse=reverse+(n%10);   
    digit = n%10;
    sum=sum+digit;
    n/=10;
    }
    printf("The sum of the given number is %d\n", sum);
    printf("The reverse of the given number is %d", reverse);
    return 0;
}