#include "raylib.h"

#include "config.h"
#include "screens/main_menu.h"

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Platform Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);
        DrawMainMenu();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}