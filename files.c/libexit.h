#ifndef EXIT_H_
#define EXIT_H_
#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_ttf.h>


void afficher_exit(int e,SDL_Surface* screen,SDL_Surface* exit,SDL_Surface* exit_yes,SDL_Surface* exit_no,SDL_Surface* exit_YES,SDL_Surface* exit_NO);

void exit1(int *k,SDL_Event event,int *continuer,int *ss,int *s,int *e,int c,SDL_Rect pos,Mix_Chunk *scratch,SDL_Surface* screen,SDL_Surface* exit,SDL_Surface* exit_yes,SDL_Surface* exit_YES,SDL_Surface* exit_no,SDL_Surface* exit_NO);


#endif/*EXIT_H_*/
