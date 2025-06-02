#include<stdio.h>
#include<string.h>

int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int noOfMatches;
        float average;
    } cricketer;
    cricketer arr[3];

    // 3 cricketers
    for(int i=0;i<3;i++){
        printf("Enter the name: ");
        scanf("%s",&arr[i].name);
        printf("Enter the age: ");
        scanf("%d",&arr[i].age);
        printf("Enter the number of matches: ");
        scanf("%d",&arr[i].noOfMatches);
        printf("Enter the average: ");
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf("Name: %s\n",arr[i].name);
        printf("Age: %d\n",arr[i].age);
        printf("No of matches: %d\n",arr[i].noOfMatches);
        printf("Average: %f\n",arr[i].average);
    }
    return 0;
}