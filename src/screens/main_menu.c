#include "raylib.h"

#include "config.h"

const char *menu_text = "Press ENTER to start the game";
const int font_size = 40;

void DrawMainMenu(void)
{
    const textWidth = MeasureText(menu_text, font_size);
    const x = (GetScreenWidth() - textWidth) / 2;
    const y = GetScreenHeight() / 2;

    DrawText(menu_text, x, y, 40, BLUE);
}