#ifndef COLLISION_H_
#define COLLISION_H_
#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_ttf.h>


SDL_Color getpixel(SDL_Surface *background11,int xp,int yp);
void collision_background(SDL_Surface *background11,int *xx,int *yy,int *s,int *x,int *kk,int *kkk,int *a,int *o,int *m,int *nnnn);
int collision_ab(int x,int xx,int yy,int xe,int ye);
int collision_ab_score(int x,int xx,int yy,int xe,int ye);

#endif/*COLLISION_H_*/
