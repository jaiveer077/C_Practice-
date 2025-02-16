#include<stdio.h>

int main(){
    int n, k;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        k = i * n;
        printf("%d X %d = %d\n", n, i, k);
    }

    return 0 ;
}