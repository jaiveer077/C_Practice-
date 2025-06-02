#include<stdio.h>

int maze2(int n, int m){
    int rightWays=0,downWays=0;
    if(n==1 && m==1) return 1;
    if(n==1){ // cannot go down 
        rightWays+=maze2(n,m-1);
    }
    if(m==1){ // cannot go right
        downWays+=maze2(n-1,m);
    }
    if(n>1 && m>1){
        rightWays+=maze2(n,m-1);
        downWays+=maze2(n-1,m);
    }
    int totalWays=rightWays+downWays;
    return totalWays;
}
int main(){
    int n,m; // number of rows and number of columns for the maze
    printf("Enter no of rows for the maze: ");
    scanf("%d",&n);
    printf("Enter no of columns for the maze: ");
    scanf("%d",&m);
    int noOfWays=maze2(n,m);
    printf("%d",noOfWays);
    return 0;
}