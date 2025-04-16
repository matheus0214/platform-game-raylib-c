#include "raylib.h"
#include "stdio.h"

#include "config.h"
#include "screens/main_menu.h"

void handleScreens(int screen)
{
    if (screen == SCREEN_MAIN_MENU && IsKeyDown(KEY_ENTER))
    {
        UnloadMainMenu();
    }
}

void renderScreens(int screen)
{
    switch (screen)
    {
    case SCREEN_MAIN_MENU:
        DrawMainMenu();
        break;
    default:
        break;
    }
}

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Platform Game");

    int currentScreen = SCREEN_MAIN_MENU;

    InitMainMenu();

    while (!WindowShouldClose())
    {
        handleScreens(currentScreen);

        BeginDrawing();

        ClearBackground(BLACK);
        renderScreens(currentScreen);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}