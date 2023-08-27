#include <ncurses.h>
#include "../include/terminalbless.h"
#include "exemple_data.h"
#include <stdio.h>


void init(Data data){

}

void event(Data data, int key){

}

void update(Data data){

}

void draw(Data data){

}

int main() {
    GameEngine game_engine;
    Data data;
    init_engine();
    game_engine.InitCallback = init;
    game_engine.EventCallback = event;
    game_engine.UpdateCallback = update;
    game_engine.DrawCallback = draw;

    game(game_engine);

    return 0;
}