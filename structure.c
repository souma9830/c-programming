#include<Stdio.h>
int main(){
    struct pokemon
    {
       int attack;
        int spped;
        int hp;
    };
    struct pokemon pikachu;
   pikachu.attack=60;
   pikachu.spped=500;
   pikachu.hp=300;
   printf("%d",pikachu.attack);
    
    
}