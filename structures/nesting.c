#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendaryPokemon{
        pokemon normal;
        char ability[100];
    } legendaryPokemon;
    typedef struct godpokemon{
        legendaryPokemon legend;
        int specialAttack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialAttack=300;
    strcpy(arceus.legend.ability,"Turns anyone to stone");
    arceus.legend.normal.attack=500;

    legendaryPokemon mewtwo;
    strcpy(mewtwo.ability,"Prsessure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.speed=180;

    return 0;
}