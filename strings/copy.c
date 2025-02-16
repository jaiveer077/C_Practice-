#include<stdio.h>

int main(){
    char s1[] = "PhysicsWallah";
    char *s2 = s1;
    // Lets change in s1
    // s1[0] = 'M';  // s2 is a shallow copy
    // printf("%s", s1);
    return 0;
}