#include "raylib.h"

#include "config.h"

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Platform Game");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}