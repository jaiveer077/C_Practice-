#include<stdio.h>

int main(){
    int sum = 0;
    int digit,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        digit=n%10;
        if(digit%2!=0){
            sum=sum+digit;
        }
        n/=10;
    }
    printf("the sum of odd digits of the given number is %d\n", sum);
    return 0;
}