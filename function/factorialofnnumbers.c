#include<stdio.h>

int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("The factorial of %d is %d\n",i,factorial(i));
    }
    return 0;
}