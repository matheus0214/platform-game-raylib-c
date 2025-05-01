// Copyright 2025 Matheus G. Dias
#include "screens/level_1.h"

#include <raylib.h>

#include "configs/config.h"
#include "player/player.h"

void DrawLevel_1(void) {
    DrawRectangle(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, RED);

    DrawPlayer((Vector2){20, 50});
    
    DrawRectangleV((Vector2){0, SCREEN_HEIGHT-25}, (Vector2){SCREEN_WIDTH, 25},BLUE);
}
