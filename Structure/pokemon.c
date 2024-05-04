#include <stdio.h>
struct pokemon
{
    int speed;
    int atk;
    float hp_regen;
    char tier; // A,B,C,D,S
};
int main()
{
    struct pokemon pikachu;
    pikachu.speed = 100;
    pikachu.atk = 89;
    pikachu.hp_regen = 8.7;
    pikachu.tier = 'A';

    printf("%c", pikachu.tier);

    return 0;
}