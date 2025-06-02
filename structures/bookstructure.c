#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noOfPages;
        float price;
    } a,b,c;
    
    a.noOfPages=100;
    a.price=411.5;
    strcpy(a.name,"Secret Seven");

    b.noOfPages=200;
    b.price=100.4;
    strcpy(b.name,"Famous Five");

    printf("%d\n",b.noOfPages);
    printf("%s\n",b.name);
    printf("%f\n",b.price);
    return 0;
}