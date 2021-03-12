#include <stdio.h>
#include <stdint.h>

//Date: 3/11/21

struct player
{
    uint8_t Xpos;
    uint8_t Ypos;
    uint16_t LifePoints;
};
typedef struct player player_t;

//creating Sprite and setting properties
player_t Sprite;

void spriteSetup()
{
    Sprite.Xpos = 10;
    Sprite.Ypos = 11;
    Sprite.LifePoints = 0;
}

int main()
{
    spriteSetup();
    return(0);
}