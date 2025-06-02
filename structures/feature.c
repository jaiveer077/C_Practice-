#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[15];
    } pokemon;
    pokemon a,b,c;
    a.attack=100;
    a.hp=100;
    a.speed=90;
    a.tier='A';
    strcpy(a.name,"Blastoise");

    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    // strcpy(b.name,a.name);
    b=a; // deep copy
    strcpy(b.name,"Venusaur");
    printf("%s\n",b.name);
    return 0;
}