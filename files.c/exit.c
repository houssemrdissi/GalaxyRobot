#include"libfonctions.h"
#include"libexit.h"


void afficher_exit(int e,SDL_Surface* screen,SDL_Surface* exit,SDL_Surface* exit_yes,SDL_Surface* exit_no,SDL_Surface* exit_YES,SDL_Surface* exit_NO)
{


afficher_load(exit,screen,0,0);



if(e==1){afficher_load(exit_YES,screen,25,300);afficher_load(exit_no,screen,25,400);}

if(e==2){afficher_load(exit_NO,screen,25,400);afficher_load(exit_yes,screen,25,300);}


}





void exit1(int *k,SDL_Event event,int *continuer,int *ss,int *s,int *e,int c,SDL_Rect pos,Mix_Chunk *scratch,SDL_Surface* screen,SDL_Surface* exit,SDL_Surface* exit_yes,SDL_Surface* exit_YES,SDL_Surface* exit_no,SDL_Surface* exit_NO)
{


(*s)=3;afficher_exit(*e,screen,exit,exit_yes,exit_no,exit_YES,exit_NO);
  switch(c)
  {
  case 1:{*e=1;if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}break;  
  case 2:{*e=2;if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}break;  
  }
  
  if(pos.x!=0 && pos.y!=0)
  {
  if(pos_souris_rect(pos,25,300,300,330)==1){if(*e!=1){if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}*e=1;}
  if(pos_souris_rect(pos,25,300,400,430)==1){if(*e!=2){if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}*e=2;}
 
  }
if(*e==1 && c==5 && *k==1){(*continuer)=0;}
if(*e==2 && c==5 && *k==1 ){(*s)=0;(*e)=1;(*k)=0;return;}

if(pos_press_souris(event,25,300,300,330)==1){(*continuer)=0;}
if(pos_press_souris(event,25,300,400,430)==1){(*s)=0;(*e)=1;(*k)=0;return;}
(*k)=1;







}

