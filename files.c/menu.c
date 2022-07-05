#include"libfonctions.h"
#include"libmenu.h"

 

void afficher_all(SDL_Surface* screen,SDL_Surface* menu,SDL_Surface* NewGame,SDL_Surface* LoadGame,SDL_Surface* Multiplayer,SDL_Surface* Settings,SDL_Surface* Exit,SDL_Surface* Sound1,SDL_Surface* Sound2)
{

afficher_load(menu,screen,0,0);
afficher_load(NewGame,screen,50,250);
afficher_load(LoadGame,screen,50,300);
afficher_load(Multiplayer,screen,50,350);
afficher_load(Settings,screen,50,400);
afficher_load(Exit,screen,50,450);
afficher_load(Sound1,screen,700,530);
afficher_load(Sound2,screen,735,530);
}

/*----------------------------------------------*/

void mb_menu(int ll,int menuplay,SDL_Surface* screen,SDL_Surface* menu,SDL_Surface* NewGame,SDL_Surface* LoadGame,SDL_Surface* Multiplayer,SDL_Surface* Settings,SDL_Surface* Exit,SDL_Surface* Sound1,SDL_Surface* Sound2,SDL_Surface* NewGameG,SDL_Surface* LoadGameG,SDL_Surface* MultiplayerG,SDL_Surface* SettingsG,SDL_Surface* ExitG,SDL_Surface* Sound2OFF)
{

switch(menuplay)
{
case 1:{afficher_all(screen,menu,NewGameG,LoadGame,Multiplayer,Settings,Exit,Sound1,Sound2);}break;
case 2:{afficher_all(screen,menu,NewGame,LoadGameG,Multiplayer,Settings,Exit,Sound1,Sound2);}break;
case 3:{afficher_all(screen,menu,NewGame,LoadGame,MultiplayerG,Settings,Exit,Sound1,Sound2);}break;
case 4:{afficher_all(screen,menu,NewGame,LoadGame,Multiplayer,SettingsG,Exit,Sound1,Sound2);}break;
case 5:{afficher_all(screen,menu,NewGame,LoadGame,Multiplayer,Settings,ExitG,Sound1,Sound2);}break;
}

if(ll==0){afficher_load(Sound2OFF,screen,737,530);}
if(ll==1){afficher_load(Sound2,screen,735,530);}


}

/*----------------------------------------------*/

int menuplay_souris(int ss,SDL_Rect pos,int menuplay,Mix_Chunk *scratch)
{
if(pos_souris_rect(pos,50,308,450,493)==1) {if(menuplay!=5){if(ss==1){Mix_PlayChannel(-1,scratch,0);}}menuplay=5;}
if(pos_souris_rect(pos,50,308,400,443)==1) {if(menuplay!=4){if(ss==1){Mix_PlayChannel(-1,scratch,0);}}menuplay=4;}
if(pos_souris_rect(pos,50,308,350,393)==1) {if(menuplay!=3){if(ss==1){Mix_PlayChannel(-1,scratch,0);}}menuplay=3;}
if(pos_souris_rect(pos,50,308,300,343)==1) {if(menuplay!=2){if(ss==1){Mix_PlayChannel(-1,scratch,0);}}menuplay=2;}
if(pos_souris_rect(pos,50,308,250,293)==1) {if(menuplay!=1){if(ss==1){Mix_PlayChannel(-1,scratch,0);}}menuplay=1;}


return menuplay;

}

/*----------------------------------------------*/

void music_menu(int *ll,SDL_Event event)
{

 if(pos_press_souris(event,740,770,530,560)==1){ if((*ll)==1){(*ll)=0;Mix_PauseMusic();}else {if((*ll)==0){(*ll)=1;Mix_ResumeMusic();}} }
 if(pos_press_souris(event,700,740,530,560)==1){ Mix_RewindMusic();}



}

/*----------------------------------------------*/

void menu1(int *ll,int ss,int c,Mix_Chunk *scratch,SDL_Rect pos,SDL_Event event,int *menuplay,SDL_Surface* screen,SDL_Surface* menu,SDL_Surface* NewGame,SDL_Surface* LoadGame,SDL_Surface* Multiplayer,SDL_Surface* Settings,SDL_Surface* Exit,SDL_Surface* Sound1,SDL_Surface* Sound2,SDL_Surface* NewGameG,SDL_Surface* LoadGameG,SDL_Surface* MultiplayerG,SDL_Surface* SettingsG,SDL_Surface* ExitG,SDL_Surface* Sound2OFF)
{int con;






    switch(c)
    {
    case 1:{if(ss==1){Mix_PlayChannel(-1,scratch,0);}if(*menuplay==1){*menuplay=5;}else{if(*menuplay!=1 && *menuplay!=0)(*menuplay)--;}if(*menuplay==0){*menuplay=1;}}break;
    case 2:{if(ss==1){Mix_PlayChannel(-1,scratch,0);}if(*menuplay==5){*menuplay=1;}else{if(*menuplay!=5)(*menuplay)++;}}break;
    
    }
  
  if(pos.x!=0 && pos.y!=0)
  {
  *menuplay=menuplay_souris(ss,pos,*menuplay,scratch);
  }



music_menu(&(*ll),event);

mb_menu (*ll,*menuplay,screen,menu,NewGame,LoadGame,Multiplayer,Settings,Exit,Sound1,Sound2,NewGameG,LoadGameG,MultiplayerG,SettingsG,ExitG,Sound2OFF);

}




