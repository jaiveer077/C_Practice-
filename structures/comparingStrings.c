#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct student{
    int rno;
    char name[20];
    char dept[20];
    char course[30];
    int year;
} student;

void check(student s1, student s2){
    bool flag=false;
    if(s1.dept!=s2.dept) flag=false;
    if(flag==true){
        printf("The two students have the same department.");
    } else {
        printf("The two students have the different departments");
    }
}
int main(){
    student s1,s2;
    strcpy(s1.dept,"Chemical");
    strcpy(s2.dept,"Mechanical");
    check(s1,s2);

    return 0;
}