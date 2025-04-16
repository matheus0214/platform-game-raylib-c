#include "raylib.h"

#include "assets.h"


Texture2D mouse;
Font font;

void LoadTexturesAssets(void) {
    mouse = LoadTexture("assets/cursor_pointer.png");
    font = LoadFont("assets/fonts/Kaph-Regular.ttf");
}

void UnloadTexturesAssets(void) {
    UnloadTexture(mouse);
    UnloadFont(font);
}