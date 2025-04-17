// Copyright 2025 Matheus G. Dias
#include "utils/collide.h"

#include <raylib.h>

bool CursorCollide(Rectangle dest) {
    const Vector2 cursor_pos = GetMousePosition();
    const bool collide_width =
        cursor_pos.x >= dest.x && cursor_pos.x <= dest.x + dest.width;
    const bool collide_height =
        cursor_pos.y >= dest.y && cursor_pos.y <= dest.y + dest.height;

    return collide_width && collide_height;
}
