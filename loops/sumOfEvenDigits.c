#include<stdio.h>

int main(){
    int sum=0;
    int digits,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        digits = n % 10;
        if(digits%2==0){
            sum += digits;
        }
        n/=10;
    }
    printf("The sum of even digits of a nummber is %d", sum);
    return 0;
}