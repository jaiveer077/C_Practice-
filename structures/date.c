#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
    // a-> 5/12/1999
    // b-> 19/1/2023
    a.day=5;
    a.month=12;
    a.year=1999;
    b.day=19;
    b.month=1;
    b.year=2023;
    bool flag=true;
    date c;
    c=a;
    if(a.day!=c.day) flag=false;
    if(a.month!=c.month) flag=false;
    if(a.year!=c.year) flag=false;


    if(flag==true){
        printf("The dates are same!");
    } else {
        printf("The dates are different!");
    }
    return 0;
}