#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

#include "player/player.h"

PlayerPTR player;

void InitPlayer(void) {
    if(!player) {
        printf("Player need to be created\n");
        player = (PlayerPTR)malloc(sizeof(Player));
    }
    
    player->color = PURPLE;
}

/* draw player on screen and force a current position*/
void DrawPlayer(Vector2 pos) {
    player->position = pos;
    DrawRectangleV(pos, (Vector2){30, 30}, player->color);
}

void UnloadPlayer(void) {
    if(player) {
        free(player);
    }
}