#ifndef SETTINGS_H_
#define SETTINGS_H_
#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_ttf.h>


void afficher_button_settings(SDL_Surface* screen,SDL_Surface* setting,SDL_Surface* settings_button1,SDL_Surface* settings_button2,SDL_Surface* settings_button3);

void settings_music1(int kk,int ll,int ss,int l,SDL_Surface* screen,SDL_Surface* settings_music,SDL_Surface* settings_music_button1,SDL_Surface* settings_music_button2,SDL_Surface* settings_music_button3,SDL_Surface* settings_music_button4,SDL_Surface* settings_music_button5,SDL_Surface* settings_music_button6,SDL_Surface* settings_button3,SDL_Surface* settings_music_sound1,SDL_Surface* settings_music_sound2,SDL_Surface* settings_music_lecture,SDL_Surface* settings_music_pause,SDL_Surface* settings_music_arreter1,SDL_Surface* settings_music_arreter2,SDL_Surface* settings_music_refresh,SDL_Surface* settings_button3G);

void settings1(int *aa,int *ll,int *ss,int c,SDL_Rect pos,Mix_Chunk *scratch,SDL_Event event,SDL_Surface* screen,SDL_Surface* setting,SDL_Surface* settings_button1,SDL_Surface* settings_button2,SDL_Surface* settings_button3,SDL_Surface* settings_button1G,SDL_Surface* settings_button2G,SDL_Surface* settings_button3G,int *s,int *m,int *d,SDL_Surface* settings_music,SDL_Surface* settings_music_button1,SDL_Surface* settings_music_button2,SDL_Surface* settings_music_button3,SDL_Surface* settings_music_button4,SDL_Surface* settings_music_button5,SDL_Surface* settings_music_button6,SDL_Surface* settings_music_sound1,SDL_Surface* settings_music_sound2,SDL_Surface* settings_music_lecture,SDL_Surface* settings_music_pause,SDL_Surface* settings_music_arreter1,SDL_Surface* settings_music_arreter2,SDL_Surface* settings_music_refresh,int *l);

#endif/*SETTINGS_H_*/
