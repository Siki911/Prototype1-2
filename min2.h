#ifndef FONCTION2_H_

#define FONCTION2_H_



#include <stdlib.h>

#include <stdio.h>

#include <SDL/SDL.h>

#include <SDL/SDL_image.h>


typedef struct 
{

SDL_Surface *map;

SDL_Rect posmap;

}ma;

typedef struct 
{

SDL_Surface *mini;

SDL_Rect posmini;

}mi;

mi minimap(perso p,mi m2);

#endif
