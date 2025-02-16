#include<stdio.h>

int main(){
    int x1, x2, x3, y1, y2, y3;
    printf("Enter a coordinates of point A: ");
    scanf("%d%d", &x1, &x2);
    printf("Enter coordinates of point B: ");
    scanf("%d%d", &x2, &y2);
    printf("Enter coordinates of point C: ");
    scanf("%d%d", &x3, &y3);

    double m1;
    m1 = (y2-y1)/(x2-x1);
    double m2;
    m2 = (y3-y2)/(x3-x2);

    if(m1=m2){
        printf("YES, the three points fall on a same straight line.\n");
    } else {
        printf("NO, the points do not fall on the straight line.\n");
    }
    

    return 0;
}