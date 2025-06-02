// C program to print numbers in decreasing order using recursion 
#include<stdio.h>
void decreasing(int,int); // function prototype 
int main(){
    int x;
    printf("enter the value of x: ");
    scanf("%d",&x);
    decreasing(x,1);
}
void decreasing(int x,int n){
    if(x==0) return;
    printf("%d\n",x);
    decreasing(x-1,n);
}