// C program to check a number is palindrome or not 
#include<stdio.h>
int isPalindrome(int); // function prototype
int main(){
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    int output=isPalindrome(n);
    if(n==output){
        printf("%d is a palindrome",n);
    } else {
        printf("%d is not a palindrome",n);
    }
    return 0;
}
int isPalindrome(int n){
    int temp=n,sum=0,digits;
    while(temp!=0){
        digits=temp%10;
        sum=sum*10+digits;
        temp/=10;
    }
    return sum;
}