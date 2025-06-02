#include<stdio.h>

int main(){
    FILE* ptr=fopen("jaiveer.txt","w");
    char str[]="Creative thinking comes from non-judgemental mindset";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}