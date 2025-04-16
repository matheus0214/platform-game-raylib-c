#include "raylib.h"

#include "assets.h"


Texture2D mouse;

void LoadTexturesAssets(void) {
    mouse = LoadTexture("assets/cursor_pointer.png");
}

void UnloadTexturesAssets(void) {
    UnloadTexture(mouse);
}