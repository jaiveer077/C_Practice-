#include<stdio.h>

int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
        printf("The factorial of %d is %d\n",i,factorial);
    }
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}