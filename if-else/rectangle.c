#include<stdio.h>

int main(){
    int length;
    int breadth;
    int area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if(area > perimeter){
        printf("The area is greater than perimeter.\n");
    } else {
        printf("The perimeter is greater than area.\n");
    }
    return 0;
}