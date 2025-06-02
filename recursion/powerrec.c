#include<stdio.h>
int power(int,int); // function prototype
int main(){
    int a,b;
    printf("Enter base: ");
    scanf("%d",&a);
    printf("Enter exponent: ");
    scanf("%d",&b);
    int res=power(a,b);
    printf("Result: %d",res);
    return 0;
}
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}