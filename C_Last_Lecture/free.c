#include<stdio.h>
#include<stdlib.h>

int main(){
    int* ptr=(int*)calloc(10,4);
    int* p=ptr;
    p++;
    free(ptr);
    return 0;
}