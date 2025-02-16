#include<stdio.h>

int main(){
    int sp, cp, profit, loss;

    printf("Enter the selling price: ");
    scanf("%d", &sp);
    printf("Enter the cost price: ");
    scanf("%d", &cp);

    if(sp>cp){
        printf("You have made a profit.\n");
    } else if (cp > sp){
        printf("You have made loss.\n");
    } else if (sp == cp){
        printf("No profit NO loss.\n");
    }

    
    return 0;

}    