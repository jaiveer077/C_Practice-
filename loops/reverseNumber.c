#include<stdio.h>

int main(){
    int n;
    int r=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
    r=r*10;
    r=r+(n%10);
    n/=10;
    }
    printf("The revrese of the given number is %d", r);
    return 0;
}