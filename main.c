#include <ncurses.h>
#include "terminalbless.h"
#include <stdio.h>

int main() {
    GameEngine game_engine;
    init_engine();
    game(game_engine);

    return 0;
}