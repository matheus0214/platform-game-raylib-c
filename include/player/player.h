// Copyright 2025 Matheus G. Dias
#ifndef PLAYER_H
#define PLAYER_H

#include <raylib.h>

typedef struct {
    Vector2 position;
    Color color;
} Player, *PlayerPTR;

extern Player *player;

void InitPlayer(void);
void DrawPlayer(Vector2 pos);
void UnloadPlayer(void);

#endif