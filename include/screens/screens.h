#ifndef SCREENS_H
#define SCREENS_H


typedef enum Screens {
    SCREEN_MAIN_MENU = 0,
    LEVEL_1
} Screens;

extern Screens currentScreen;

void ChangeScreen(Screens screen);

#endif
