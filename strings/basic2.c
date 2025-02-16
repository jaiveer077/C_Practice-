#include<string.h>
#include<stdio.h>

int main(){
    char str[40];
    scanf("%[^\n]s", str);
    // gets(str);
    printf("Your input was: %s", str);
}