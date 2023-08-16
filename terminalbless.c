//
// Created by nathaan on 15/08/23.
//
#include "terminalbless.h"
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

int game(GameEngine game_engine){
    //init

    game_engine.InitCallback();


    //game loop
    while(game_running){
        game_engine.EventCallback(getch());
        game_engine.UpdateCallback();
        game_engine.DrawCallback();
    }

    return 0;
}