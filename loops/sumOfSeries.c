#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    // 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8......
    // odd numbers -> add
    // even numbers -> subtract
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // for(int i=1;i<=n;i++){
    //     if(i%2==0){
    //         sum=sum+i;
    //     } else if(i%2!=0){
    //         sum=sum-i;
    //     }
    // }
    // printf("Sum of the given series is %d", sum);
    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }
    printf("The sum is: %d", sum);
    return 0;
}