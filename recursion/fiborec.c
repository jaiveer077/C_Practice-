#include<stdio.h>

int fibonacci(int n){
    if(n<=2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int fibo=fibonacci(n);
    printf("%d",fibo);
    return 0;
}