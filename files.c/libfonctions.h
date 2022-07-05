#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_ttf.h>


void afficher_load(SDL_Surface* button,SDL_Surface* screen,int x,int y);

int gestion_clavier(SDL_Event event);

SDL_Rect gestion_souris(SDL_Event event);

int pos_souris_rect(SDL_Rect pos,int x,int xx,int y,int yy);

int pos_press_souris(SDL_Event event,int x,int xx,int y,int yy);




#endif/*FONCTIONS_H_*/
