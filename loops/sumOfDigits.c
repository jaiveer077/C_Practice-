#include<stdio.h>

int main(){
    int sum=0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int lastDigit=0;
    while(n!=0){
    lastDigit=n%10;
    sum=sum+lastDigit;
    n=n/10;
    }
    printf("The sum of digits is %d", sum);
    return 0;
}