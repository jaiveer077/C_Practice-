#include<stdio.h>

int main(){
    int n;
    int i, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        factorial*=i;
    }
    printf("The factorial of a number is %d", factorial);
    return 0;
}