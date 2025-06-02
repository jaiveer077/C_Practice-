#include<stdio.h>
#include<string.h>

int main(){
    struct person{
        char name[50];
        int salary;
        int age;
    } a,b;
    strcpy(a.name,"Raghav Aggarwal");
    b.age=23;
    printf("%s\n",a.name);
    printf("%d",b.age);
    return 0;
}