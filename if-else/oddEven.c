#include <stdio.h>

int main(){
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Please enter a positive number.\n");
    } else {
        printf("You have entered the positive number = %d.\n", n);

        if (n % 2 == 0){
            printf("You have entered an even number.\n");
        } else {
              printf("You have entered an odd number.\n");
        }

        return 0;
}
}