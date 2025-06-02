#include<stdio.h>

int main(){
    struct pokemon{ // user defined data type
        int hp;
        int speed;
        int attack;
        char tier; // S,A,B,C,D
    } pickachu,charizard,mewtwo;
    printf("Enter attack of pikachu: ");
    scanf("%d",&pickachu.attack);
    // pickachu.attack=60;
    pickachu.hp=50;
    pickachu.speed=100;
    pickachu.tier='A';

    printf("%d\n",pickachu.attack);

    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

    mewtwo.attack=130;
    mewtwo.hp=80;
    mewtwo.speed=80;
    mewtwo.tier='G';
    return 0;
}