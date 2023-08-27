//
// Created by nathaan on 15/08/23.
//

#ifndef TERMINALBLESS_TERMINALBLESS_H
#define TERMINALBLESS_TERMINALBLESS_H
#include "data.h"

typedef struct GameEngine{
    void (*InitCallback)(Data data);
    void (*EventCallback)(Data data, int key);
    void (*UpdateCallback)(Data data);
    void (*DrawCallback)(Data data);
} GameEngine;



int init_engine();
int game(Data data, GameEngine game_engine);

#endif //TERMINALBLESS_TERMINALBLESS_H
