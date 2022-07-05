#include"libfonctions.h"


void afficher_load(SDL_Surface* button,SDL_Surface* screen,int x,int y)
{

SDL_Rect pos;
pos.x=x;
pos.y=y;

SDL_BlitSurface(button, NULL, screen, &pos);


}


/*----------------------------------------------*/

int gestion_clavier(SDL_Event event)
{
int clavier=-1;


switch(event.type)

{

 case SDL_QUIT: {clavier= 0;}break;
   
 case SDL_KEYDOWN:
  {
   switch (event.key.keysym.sym)
   {
    case SDLK_RETURN:{clavier=5;}break;
    case SDLK_UP:{clavier=1;}break;
    case SDLK_DOWN:{clavier=2;}break;
    case SDLK_RIGHT:{clavier=3;}break;
    case SDLK_LEFT:{clavier=4;}break;
    case SDLK_x:{clavier=6;}break;
case SDLK_w:{clavier=7;}break;
   }
  }break;
}
return clavier;
}

/*----------------------------------------------*/

SDL_Rect gestion_souris(SDL_Event event)
{

SDL_Rect pos;
pos.x=0;
pos.y=0;

if(event.type==SDL_MOUSEMOTION)				  
   { pos.x=event.motion.x;
    pos.y=event.motion.y;
    
   }


return pos;
}

/*----------------------------------------------*/

int pos_souris_rect(SDL_Rect pos,int x,int xx,int y,int yy)
{
int n=0;
if(x<pos.x && xx>pos.x && y<pos.y && yy>pos.y){n=1;}
return n;
}

/*----------------------------------------------*/

int pos_press_souris(SDL_Event event,int x,int xx,int y,int yy)
{
int a=0,b=0,n=0;

if(event.type==SDL_MOUSEBUTTONDOWN)
{
 if(event.button.button==SDL_BUTTON_LEFT) 
{
a=event.button.x;
b=event.button.y;
 if(a>x && a<xx && b>y && b<yy){n=1;}
}
}
return n;
}














