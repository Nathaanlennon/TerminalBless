#include <ncurses.h>
#include "include/terminalbless.h"
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
    init_engine();
    game_engine.InitCallback = init;
    game_engine.EventCallback = event;
    game_engine.UpdateCallback = update;
    game_engine.DrawCallback = draw;

    game(game_engine);

    return 0;
}