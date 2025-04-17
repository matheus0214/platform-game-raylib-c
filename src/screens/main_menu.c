// Copyright 2025 Matheus G. Dias

#include "screens/main_menu.h"

#include <raylib.h>

#include "screens/screens.h"
#include "utils/assets.h"

const char *menu_text = "Start";
const int font_size = 40;
static Texture2D background;
static Texture2D button_red;

void InitMainMenu(void) {
    background = LoadTexture("assets/background.png");
    button_red = LoadTexture("assets/ui/button-red.png");
}

void DrawMainMenu(void) {
    DrawTexturePro(background,
                   (Rectangle){0, 0, GetScreenWidth(), GetScreenHeight()},
                   (Rectangle){0, 0, GetScreenWidth(), GetScreenHeight()},
                   (Vector2){0, 0}, 0, WHITE);
    DrawStartButton();
}

void DrawStartButton(void) {
    const int button_x = (GetScreenWidth() - button_red.width) / 2.0f;
    const int button_y = (GetScreenHeight() - button_red.height) / 2.0f;
    const Rectangle button_rect_pos = (Rectangle){button_x, button_y, 230, 86};

    Vector2 mouse_point = GetMousePosition();

    if (CheckCollisionPointRec(mouse_point, button_rect_pos) &&
        IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
        ChangeScreen(LEVEL_1);
    }

    DrawTexturePro(button_red, (Rectangle){0, 0, 270, 96}, button_rect_pos,
                   (Vector2){0, 0}, 0, WHITE);
    DrawTextEx(font, menu_text, (Vector2){button_x + 48, button_y + 30}, 32, 3,
               WHITE);
}

void UnloadMainMenu(void) {
    UnloadTexture(background);
    UnloadTexture(button_red);
}
