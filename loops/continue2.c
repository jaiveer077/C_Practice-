#include<stdio.h>

int main(){

    for(int i=1;i<=100;i++){
        if(i%2!=0){
            continue;  // odd numbers waali iteration are skiped 
        }
        printf("%d ", i);
    }

    return 0;
}