#ifndef MOVE_H_
#define MOVE_H_
#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_ttf.h>

void move_right(int *x,int *xx,int *n,int *nnnn);
void move_left(int *x,int *xx,int *n,int *nnnn);
void move_keystate(Uint8 *keystates,int *x,int *xx,int *n,int *nnnn,int *m,int *mo);
void jump_up(Mix_Chunk *scratch_jump,int *a,int *o,int *yy,int *kk,int *kkk);
void jump_down(int *a,int *o,int *yy,int *kkk,int *m);
void animation_perso(SDL_Surface* screen,SDL_Surface* perso,SDL_Surface* perso1,SDL_Surface* perso2,SDL_Surface* perso3,SDL_Surface* persop,SDL_Surface* perso1p,SDL_Surface* perso2p,SDL_Surface* perso3p,int xx,int yy,int n,int m);
void animation_enemi(SDL_Surface* screen,SDL_Surface* b1enemi11,SDL_Surface* b1enemi12,SDL_Surface* b1enemi13,SDL_Surface* b1enemi11p,SDL_Surface* b1enemi12p,SDL_Surface* b1enemi13p,int x,int *xe,int *ye,int *nnn,int *ce,int *mm,int d,int xxe,int xxxe);
void anim_score(SDL_Surface* screen,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,int *mmm,int xs,int ys);
void animation_score(Mix_Chunk *scratch_coin,int *co,int xx,int yy,SDL_Surface* screen,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,int x,int *mmm,int a,int b,int ys);
void anim_score_cristal(SDL_Surface* screen,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,int *mmm,int xs,int ys);
void animation_cristal(Mix_Chunk *scratch_coin,int *co,int xx,int yy,SDL_Surface* screen,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,int x,int *mmm,int a,int b,int ys,int l);
void animation_sword(Mix_Chunk *scratch_coin,int *co,int xx,int yy,SDL_Surface* screen,SDL_Surface* coin1,int x,int a,int b,int ys,int l);

#endif/*MOVE_H_*/
