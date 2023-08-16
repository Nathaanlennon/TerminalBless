//
// Created by nathaan on 15/08/23.
//

#ifndef TERMINALBLESS_TERMINALBLESS_H
#define TERMINALBLESS_TERMINALBLESS_H

typedef struct GameEngine{
    void (*InitCallback)();
    void (*EventCallback)(int key);
    void (*UpdateCallback)();
    void (*DrawCallback)();
} GameEngine;

typedef struct Data{

}Data;

int init_engine();
int game(GameEngine game_engine);

#endif //TERMINALBLESS_TERMINALBLESS_H
