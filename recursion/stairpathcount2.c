#include<stdio.h>

int stair(int n){
    if(n<=2) return n;
    else if(n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}