#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum=1;
    int a=1,b=1;
    printf("%d %d ",a,b);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ", sum);
    }
    return 0;
}