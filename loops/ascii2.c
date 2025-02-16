#include<stdio.h>

int main(){
    int i;
    while(i<90){
        i = 65; 
        i++;
        printf("%d ", i);
        char ch = (char)i;
        printf("%c\n", ch);
    }
    return 0;
}