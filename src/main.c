// Copyright 2025 Matheus G. Dias
#include <raylib.h>

#include "configs/config.h"
#include "screens/level_1.h"
#include "screens/main_menu.h"
#include "screens/screens.h"
#include "utils/assets.h"
#include "player/player.h"

void handleScreens(int screen);
void renderScreens(int screen);
void drawMouseImage(Texture2D mouse);

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Platform Game");

    LoadTexturesAssets();
    InitMainMenu();

    InitPlayer();

    while (!WindowShouldClose()) {
        handleScreens(currentScreen);

        BeginDrawing();

        ClearBackground(BLACK);

        renderScreens(currentScreen);
        drawMouseImage(mouse);

        EndDrawing();
    }

    UnloadPlayer();
    UnloadTexturesAssets();

    CloseWindow();

    return 0;
}

void drawMouseImage(Texture2D mouse) {
    HideCursor();
    DrawTextureV(mouse, GetMousePosition(), WHITE);
}

void handleScreens(int screen) {
    if (screen == SCREEN_MAIN_MENU && IsKeyDown(KEY_ENTER)) {
        UnloadMainMenu();
    }
}

void renderScreens(int screen) {
    switch (screen) {
        case SCREEN_MAIN_MENU:
            DrawMainMenu();
            break;
        case LEVEL_1:
            DrawLevel_1();
            break;
        default:
            break;
    }
}
