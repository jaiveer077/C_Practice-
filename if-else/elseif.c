#include<stdio.h>

int main(){
    int perc;;
    char grade;

    printf("Enter the percentage of the student: ");
    scanf("%d", &perc);

    if (perc >= 90 && perc <= 100){
        grade = 'A';
    } else if (perc>=80 && perc < 90){
        grade = 'B';
    } else if (perc>=70 && perc < 80){
        grade = 'C';
    } else if (perc>=60 && perc < 70){
        grade = 'D';
    } else if(perc >= 50 && perc < 60){
        grade = 'E';
    } else if (perc>=40 && perc < 50){
        grade = 'F';
    }

    printf("The student has recieved %c grade.\n", grade);

    return 0;
}