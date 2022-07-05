#ifndef MENU_H_
#define MENU_H_
#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_ttf.h>



void afficher_all(SDL_Surface* screen,SDL_Surface* menu,SDL_Surface* NewGame,SDL_Surface* LoadGame,SDL_Surface* Multiplayer,SDL_Surface* Settings,SDL_Surface* Exit,SDL_Surface* Sound1,SDL_Surface* Sound2);

void mb_menu(int ll,int menuplay,SDL_Surface* screen,SDL_Surface* menu,SDL_Surface* NewGame,SDL_Surface* LoadGame,SDL_Surface* Multiplayer,SDL_Surface* Settings,SDL_Surface* Exit,SDL_Surface* Sound1,SDL_Surface* Sound2,SDL_Surface* NewGameG,SDL_Surface* LoadGameG,SDL_Surface* MultiplayerG,SDL_Surface* SettingsG,SDL_Surface* ExitG,SDL_Surface* Sound2OFF);

int menuplay_souris(int ss,SDL_Rect pos,int menuplay,Mix_Chunk *scratch);

void music_menu(int *ll,SDL_Event event);

void menu1(int *ll,int ss,int c,Mix_Chunk *scratch,SDL_Rect pos,SDL_Event event,int *menuplay,SDL_Surface* screen,SDL_Surface* menu,SDL_Surface* NewGame,SDL_Surface* LoadGame,SDL_Surface* Multiplayer,SDL_Surface* Settings,SDL_Surface* Exit,SDL_Surface* Sound1,SDL_Surface* Sound2,SDL_Surface* NewGameG,SDL_Surface* LoadGameG,SDL_Surface* MultiplayerG,SDL_Surface* SettingsG,SDL_Surface* ExitG,SDL_Surface* Sound2OFF);

#endif/*MENU_H_*/
