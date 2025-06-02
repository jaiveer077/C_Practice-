// C program to print the sum of the numbers from 1 to n using recursion
#include<stdio.h>

void sum(int n,int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}