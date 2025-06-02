#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon {
    int hp;
    int attack;
    int speed;
    char tier;
    char name[50];
} pokemon;
void change(pokemon* p){
    // (*p).hp=70; // (*x).something=x->something
    p->hp=70;
    p->attack=80;
    p->speed=110;
    p->tier='S';
    strcpy(p->name,"Raichu");
}
int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    // int* x -> address of integer value
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}