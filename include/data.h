//
// Created by nathaan on 19/08/23.
//

#ifndef TERMINALBLESS_DATA_H
#define TERMINALBLESS_DATA_H
#include <stdbool.h>

typedef struct{
    int width;
    int height;
    char* sprite;
}Sprite;

typedef struct Entity{
    int x;
    int y;
    int layer;
    Sprite sprite;

    bool collision;

}Entity;

typedef struct{
    short colors_pair[20][2];
    int color_num;
}Colors;

typedef struct{
    int x;
    int y;
    short foreground;
    short background;
}Cursor;

typedef struct Data{
    Cursor cursor;
    Entity entityList[100];
    Colors colors;
}Data;


#endif //TERMINALBLESS_DATA_H
