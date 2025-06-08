#include<stdio.h>
int main(){
    struct pock
    {
        int hp;
        int speed;
        int attack;
        char tier;

    };
    struct pock pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='s';
    printf("%d",pikachu);
    struct pock chare;
    chare.attack=50;
    chare.hp=70;
    chare.speed=110;
    chare.tier='a';


}
