#include<stdio.h>

int greatestCommonDivisor(int x, int y){
    int gcd;
    for(int i=2;i<=x && i<=y;i++){
        if(x%i==0 && y%i==0){
           gcd=i;
        }
    }
    return gcd;
}
int main(){
    int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    int value=greatestCommonDivisor(num1,num2);
    printf("The greatest common divisor of the following numbers is %d",value);
    return 0;
}