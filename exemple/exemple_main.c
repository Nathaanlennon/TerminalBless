#include <ncurses.h>
#include "../terminalbless.h"
#include "exemple_data.h"
#include <stdio.h>


void init(){

}
void event(int key){

}
void update(){

}
void draw(){

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