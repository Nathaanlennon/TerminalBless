//
// Created by nathaan on 15/08/23.
//
#include "include/terminalbless.h"
#include <stdbool.h>
#include <ncurses.h>

bool game_running = true;

int init_engine(){
    // Initialiser la bibliothèque ncurses
    initscr();

    // Désactiver l'affichage des caractères saisis
    noecho();

    // Désactiver le curseur
    curs_set(FALSE);

    // Activer les touches spéciales (comme les flèches)
    keypad(stdscr, TRUE);

    return 0;
}

int game(Data data, GameEngine game_engine){
    //init

     game_engine.InitCallback(data);


    //game loop
    while(game_running){
        game_engine.EventCallback(data, getch());
        game_engine.UpdateCallback(data);
        game_engine.DrawCallback(data);
    }

    return 0;
}