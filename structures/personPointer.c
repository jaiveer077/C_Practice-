#include<stdio.h>
#include<string.h>

typedef struct person{
    int age;
    float weight;
} person;

void change(person* p1){
    p1->age=45;
    p1->weight=89.67;
}
int main(){
    person p1;
    p1.age=23;
    p1.weight=68.7;
    change(&p1);
    printf("%d\n",p1.age);
    printf("%f\n",p1.weight);
    return 0;
}