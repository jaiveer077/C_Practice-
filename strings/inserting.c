#include<stdio.h>

int main(){
    char str[20] = "College";
    printf("%s\n", str);
    // 2nd index -> 'l'
    for(int i=6;i>=2;i--){ // Loop thorugh back
        str[i+1]=str[i];
    }
    str[2]='k';
    printf("%s", str);
    return 0;
}