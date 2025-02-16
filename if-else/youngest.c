#include<stdio.h>

int main(){
    int a1, a2, a3;
    printf("Enter the age of Ram: ");
    scanf("%d", &a1);
    printf("Enter the age of Shyam: ");
    scanf("%d", &a2);
    printf("Enter the age of Ajay: ");
    scanf("%d", &a3);

    if (a1 < a2 && a1 < a3){
        printf("Ram is the youngest of three.\n");
    } else if (a2 < a1 && a2 < a3){
        printf("Shyam is the youngest of three.\n");
    } else if(a3 < a1 && a3 < a2){
        printf("Ajay is the youngest of three.\n");
    }

    return 0;
}