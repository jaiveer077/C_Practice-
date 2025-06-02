// C program to print numbers in increasing order using recursion 
#include<stdio.h>
void increasing(int,int); // function prototype
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
void increasing(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
}