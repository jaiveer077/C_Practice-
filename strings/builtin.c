#include<stdio.h>
#include<string.h>

int main(){
    // char *str = "jaiveer";
    // int x = strlen(str);
    // printf("%d",x);

    // char s1[40] = "Jaiveer Singh";
    // char s2[40];
    // strcpy(s2,s1);
    // printf("%s",s2);

    char s1[40] = "Jaiveer";
    char s2[] = "Goals";
    strcat(s1,s2);
    printf("%s", s1); 
    return 0;
}