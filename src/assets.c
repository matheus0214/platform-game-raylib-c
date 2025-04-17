// Copyright 2025 Matheus G. Dias

#include "utils/assets.h"

#include <raylib.h>

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
