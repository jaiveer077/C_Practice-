#include<stdio.h>
int main(){
    void india(); // function prototype
    india(); // calling india
    return 0;
}
void india(){
    printf("You are in India\n"); 
    void australia(); // function prototype
    australia(); // calling australia
    return;
}
void australia(){
    printf("You are in Australia\n");
    void england(); // function prototype
    england(); // calling england
}
void england(){
    printf("You are in England\n");
    return;
}