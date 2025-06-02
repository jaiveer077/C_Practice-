#include<stdio.h>
int fibonacci(int); // function prototype 
int main(){
    int n;
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}
int fibonacci(int n){
    int a=1,b=1,sum=0;
    for(int i=0;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return b;
}