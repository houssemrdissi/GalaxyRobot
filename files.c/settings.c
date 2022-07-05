#include"libfonctions.h"
#include"libsettings.h"


void afficher_button_settings(SDL_Surface* screen,SDL_Surface* setting,SDL_Surface* settings_button1,SDL_Surface* settings_button2,SDL_Surface* settings_button3)
{
afficher_load(setting,screen,0,0);
afficher_load(settings_button1,screen,250,250);
afficher_load(settings_button2,screen,250,300);
afficher_load(settings_button3,screen,25,500);
}

/*----------------------------------------------*/

void settings_music1(int kk,int ll,int ss,int l,SDL_Surface* screen,SDL_Surface* settings_music,SDL_Surface* settings_music_button1,SDL_Surface* settings_music_button2,SDL_Surface* settings_music_button3,SDL_Surface* settings_music_button4,SDL_Surface* settings_music_button5,SDL_Surface* settings_music_button6,SDL_Surface* settings_button3,SDL_Surface* settings_music_sound1,SDL_Surface* settings_music_sound2,SDL_Surface* settings_music_lecture,SDL_Surface* settings_music_pause,SDL_Surface* settings_music_arreter1,SDL_Surface* settings_music_arreter2,SDL_Surface* settings_music_refresh,SDL_Surface* settings_button3G)
{
afficher_load(settings_music,screen,0,0);
if(l==1){afficher_load(settings_music_button1,screen,250,250);   Mix_VolumeMusic(MIX_MAX_VOLUME/1000);}
if(l==2){afficher_load(settings_music_button2,screen,250,250);   Mix_VolumeMusic((MIX_MAX_VOLUME*20)/100);}
if(l==3){afficher_load(settings_music_button3,screen,250,250);   Mix_VolumeMusic((MIX_MAX_VOLUME*40)/100);}
if(l==4){afficher_load(settings_music_button4,screen,250,250);   Mix_VolumeMusic((MIX_MAX_VOLUME*60)/100);}
if(l==5){afficher_load(settings_music_button5,screen,250,250);   Mix_VolumeMusic((MIX_MAX_VOLUME*80)/100);}
if(l==6){afficher_load(settings_music_button6,screen,250,250);   Mix_VolumeMusic(MIX_MAX_VOLUME);}
if(kk==0){afficher_load(settings_button3,screen,25,500);}
if(kk==1){afficher_load(settings_button3G,screen,25,500);}
if(ss==1){afficher_load(settings_music_sound1,screen,350,350);afficher_load(settings_music_sound2,screen,250,350);}
if(ss==0){afficher_load(settings_music_sound2,screen,350,350);afficher_load(settings_music_sound1,screen,250,350);}
afficher_load(settings_music_refresh,screen,200,400);
if(ll==1){afficher_load(settings_music_pause,screen,300,400);}
if(ll==0){afficher_load(settings_music_lecture,screen,300,400);}
afficher_load(settings_music_arreter1,screen,250,400);

}

/*----------------------------------------------*/

void settings1(int *aa,int *ll,int *ss,int c,SDL_Rect pos,Mix_Chunk *scratch,SDL_Event event,SDL_Surface* screen,SDL_Surface* setting,SDL_Surface* settings_button1,SDL_Surface* settings_button2,SDL_Surface* settings_button3,SDL_Surface* settings_button1G,SDL_Surface* settings_button2G,SDL_Surface* settings_button3G,int *s,int *m,int *d,SDL_Surface* settings_music,SDL_Surface* settings_music_button1,SDL_Surface* settings_music_button2,SDL_Surface* settings_music_button3,SDL_Surface* settings_music_button4,SDL_Surface* settings_music_button5,SDL_Surface* settings_music_button6,SDL_Surface* settings_music_sound1,SDL_Surface* settings_music_sound2,SDL_Surface* settings_music_lecture,SDL_Surface* settings_music_pause,SDL_Surface* settings_music_arreter1,SDL_Surface* settings_music_arreter2,SDL_Surface* settings_music_refresh,int *l)

{
int k=0,kk=0;

if(*s==0)
{
  if((c==5) || (pos_press_souris(event,50,340,400,443)==1))
  {
  afficher_button_settings(screen,setting,settings_button1G,settings_button2,settings_button3);*m=1;
  if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}
  (*s)=1;return;
  }
}

if(*s==1)
{
  switch(c)
  {
  case 1:{*m=1;afficher_button_settings(screen,setting,settings_button1G,settings_button2,settings_button3);if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}break;  
  case 2:{*m=2;afficher_button_settings(screen,setting,settings_button1,settings_button2G,settings_button3);if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}break;  
  }
  
  if(pos.x!=0 && pos.y!=0)
  {
  if(pos_souris_rect(pos,250,500,250,280)==1){if(*m!=1){if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}*m=1;afficher_button_settings(screen,setting,settings_button1G,settings_button2,settings_button3);}
  if(pos_souris_rect(pos,250,500,300,330)==1){if(*m!=2){if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}*m=2;afficher_button_settings(screen,setting,settings_button1,settings_button2G,settings_button3);}
  if(pos_souris_rect(pos,25,60,500,530)==1){if(*m!=3 || *d==1){if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}*d=0;}*m=3;afficher_button_settings(screen,setting,settings_button1,settings_button2,settings_button3G);}
  if(*m==3){if(pos_souris_rect(pos,25,60,500,530)!=1){afficher_button_settings(screen,setting,settings_button1,settings_button2,settings_button3);*d=1;}}

  }

}
if((*s==2) || (*s==1) )
{
  switch(*m)
  {
  case 3:{if(pos_press_souris(event,25,60,500,530)==1){*s=0;if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}}}break;
  case 2:{if(pos_press_souris(event,250,550,300,330)==1)
         { 

          screen=SDL_SetVideoMode(1366,768,32, SDL_HWSURFACE | SDL_DOUBLEBUF|SDL_FULLSCREEN);

 

         }
         }break;
  case 1:{
   if(*s==1){ if((pos_press_souris(event,250,550,250,280)==1) || (c==5))
    {if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}
    *s=2;return;
    }}

    if(*s==2)
    {


if(k==0){    if(*l==1){    if(c==3){(*l)++;k=1;}if(pos_press_souris(event,270,500,250,300)==1){(*l)++;k=1;}}}
if(k==0){     if(*l==2){    if(c==3){(*l)++;k=1;}if(c==4){(*l)--;k=1;}if(pos_press_souris(event,250,296,250,300)==1){(*l)--;k=1;}if(pos_press_souris(event,316,500,250,300)==1){(*l)++;k=1;}}}
 if(k==0){    if(*l==3){  if(c==3){(*l)++;k=1;}if(c==4){(*l)--;k=1;}if(pos_press_souris(event,250,346,250,300)==1){(*l)--;k=1;}if(pos_press_souris(event,366,500,250,300)==1){(*l)++;k=1;}}}
if(k==0){     if(*l==4){    if(c==3){(*l)++;k=1;}if(c==4){(*l)--;k=1;}if(pos_press_souris(event,250,386,250,300)==1){(*l)--;k=1;}if(pos_press_souris(event,406,500,250,300)==1){(*l)++;k=1;}}}
if(k==0){     if(*l==5){    if(c==3){(*l)++;k=1;}if(c==4){(*l)--;k=1;}if(pos_press_souris(event,250,432,250,300)==1){(*l)--;k=1;}if(pos_press_souris(event,452,500,250,300)==1){(*l)++;k=1;}}}
if(k==0){     if(*l==6){    if(c==4){(*l)--;k=1;}if(pos_press_souris(event,250,480,250,300)==1){(*l)--;k=1;}}}
    if(*l>=6){*l=6;}if(*l<=1){*l=1;}

if(pos_press_souris(event,250,300,350,400)==1){(*ss)=0;}
if(pos_press_souris(event,350,400,350,400)==1){(*ss)=1;}

if(pos_press_souris(event,200,250,400,450)==1){Mix_RewindMusic();}

if(pos_press_souris(event,300,350,400,450)==1){if(*ll==1){Mix_PauseMusic();(*ll)=0;return;}if(*ll==0){if(*aa==1){Mix_RewindMusic();}Mix_ResumeMusic();(*aa)=0;(*ll)=1;return;}}

   if(pos_souris_rect(pos,25,60,500,530)==1){if(*d==1){if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}*d=0;}kk=1;}

    settings_music1      (kk,*ll,*ss,*l,screen,settings_music,settings_music_button1,settings_music_button2,settings_music_button3,settings_music_button4,settings_music_button5,settings_music_button6,settings_button3, settings_music_sound1,settings_music_sound2,settings_music_lecture,settings_music_pause,settings_music_arreter1,settings_music_arreter2,settings_music_refresh, settings_button3G);
 
    if(pos_souris_rect(pos,25,60,500,530)!=1){if(*d==0){*d=1;}}
    if(pos_press_souris(event,25,60,500,530)==1){if((*ss)==1){Mix_PlayChannel(-1,scratch,0);}*s=1;afficher_button_settings(screen,setting,settings_button1G,settings_button2,settings_button3);}if(pos_press_souris(event,250,300,400,450)==1){Mix_PauseMusic();afficher_load(settings_music_arreter2,screen,250,400);(*ll)=0;(*aa)=1;}
    }
    }break;
  }
}

}
