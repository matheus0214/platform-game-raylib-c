#include "raylib.h"

#include "config.h"
#include "screens/main_menu.h"

const char *menu_text = "Press ENTER to start the game";
const int font_size = 40;
static Texture2D background;

void InitMainMenu(void) {
    background = LoadTexture("assets/background.png");
}

void DrawMainMenu(void)
{
    DrawTexturePro(background,
                   (Rectangle){0, 0, GetScreenWidth(), GetScreenHeight()},
                   (Rectangle){0, 0, GetScreenWidth(), GetScreenHeight()},
                   (Vector2){0, 0},
                   0,
                   WHITE);

    const int textWidth = MeasureText(menu_text, font_size);
    const int x = (GetScreenWidth() - textWidth) / 2;
    const int y = GetScreenHeight() / 2;

    DrawText(menu_text, x, y, 40, BLUE);
}

void UnloadMainMenu(void) {
    UnloadTexture(background);
}