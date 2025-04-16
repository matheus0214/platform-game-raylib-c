#include "raylib.h"
#include "stdio.h"

#include "config.h"
#include "screens/main_menu.h"

void handleScreens(int screen);
void renderScreens(int screen);
void drawMouseImage(Texture2D mouse);

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Platform Game");

    int currentScreen = SCREEN_MAIN_MENU;

    InitMainMenu();

    Texture2D mouse = LoadTexture("assets/cursor_pointer.png");

    while (!WindowShouldClose())
    {
        handleScreens(currentScreen);

        BeginDrawing();

        ClearBackground(BLACK);
        
        renderScreens(currentScreen);
        drawMouseImage(mouse);

        EndDrawing();
    }

    UnloadTexture(mouse);
    CloseWindow();

    return 0;
}

void drawMouseImage(Texture2D mouse)
{
    HideCursor();
    DrawTextureV(mouse, GetMousePosition(), WHITE);
}

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