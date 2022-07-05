#include"liblevels.h" 
#include"liblevel.h" 
#include"libfonctions.h" 




void levelss(SDL_Surface* game_arr,SDL_Surface* game_home,Mix_Chunk* scratch_sword,SDL_Surface* sword,SDL_Surface* points,SDL_Surface* minute0,SDL_Surface* minute1,SDL_Surface* minute2,SDL_Surface* minute3,SDL_Surface* minute4,SDL_Surface* minute5,SDL_Surface* minute6,SDL_Surface* minute7,SDL_Surface* minute8,SDL_Surface* minute9,Mix_Chunk* scratch_flash,Mix_Chunk* scratch_cristal,SDL_Surface* speed2,SDL_Surface* score_speed0,SDL_Surface* score_speed1,SDL_Surface* score_speed2,SDL_Surface* score_speed3,SDL_Surface* score_speed4,SDL_Surface* score_speed5,SDL_Surface* score_speed6,SDL_Surface* score_speed7,SDL_Surface* score_speed8,SDL_Surface* score_speed9,SDL_Surface* speed1,SDL_Surface* cristal1,SDL_Surface* cristal2,SDL_Surface* cristal3,SDL_Surface* cristal4,SDL_Surface* cristal5,SDL_Surface* map,SDL_Surface* check,SDL_Surface* st10,SDL_Surface* st11,SDL_Surface* st12,SDL_Surface* st13,SDL_Surface* st20,SDL_Surface* st21,SDL_Surface* st22,SDL_Surface* st23,SDL_Surface* st30,SDL_Surface* st31,SDL_Surface* st32,SDL_Surface* st33,SDL_Surface* st40,SDL_Surface* st41,Mix_Music *musique,Mix_Music *ice,Mix_Music *jungle,Mix_Music *desert,Mix_Chunk* scratch,Mix_Chunk* scratch_hit,Mix_Chunk* scratch_jump,Mix_Chunk* scratch_coin,Mix_Chunk* scratch_key,Mix_Chunk* scratch_etoile,Mix_Chunk* scratch_victory,Mix_Chunk* scratch_fail,SDL_Surface* settings_button3,SDL_Surface* settings_button3G,int *s,SDL_Surface* win,SDL_Surface* etoile,SDL_Surface* etoile1,SDL_Surface* next_level,SDL_Surface* next_level1,SDL_Surface* home1,SDL_Surface* score_level,SDL_Surface* game_over,SDL_Surface* home,SDL_Surface* arr_plan,SDL_Surface* key1,SDL_Surface* key2,SDL_Surface* key3,SDL_Surface* key4,SDL_Surface* key5,SDL_Surface* key6,SDL_Surface* num0,SDL_Surface* num1,SDL_Surface* num2,SDL_Surface* num3,SDL_Surface* num4,SDL_Surface* num5,SDL_Surface* num6,SDL_Surface* num7,SDL_Surface* num8,SDL_Surface* num9,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,SDL_Surface* game_play,SDL_Surface* game_pause,SDL_Surface* heart,SDL_Surface* screen,SDL_Surface* background1,SDL_Surface* background11,SDL_Surface* background2,SDL_Surface* background22,SDL_Surface* background3,SDL_Surface* background33,SDL_Surface* background4,SDL_Surface* background44,SDL_Surface* perso,SDL_Surface* perso1,SDL_Surface* perso2,SDL_Surface* perso3,SDL_Surface* persop,SDL_Surface* perso1p,SDL_Surface* perso2p,SDL_Surface* perso3p,SDL_Surface* b1enemi11,SDL_Surface* b1enemi12,SDL_Surface* b1enemi13,SDL_Surface* b1enemi11p,SDL_Surface* b1enemi12p,SDL_Surface* b1enemi13p,SDL_Surface* b1enemi21,SDL_Surface* b1enemi22,SDL_Surface* b1enemi23,SDL_Surface* b1enemi21p,SDL_Surface* b1enemi22p,SDL_Surface* b1enemi23p,SDL_Surface* b2enemi11,SDL_Surface* b2enemi12,SDL_Surface* b2enemi13,SDL_Surface* b2enemi11p,SDL_Surface* b2enemi12p,SDL_Surface* b2enemi13p,SDL_Surface* b2enemi21,SDL_Surface* b2enemi22,SDL_Surface* b2enemi23,SDL_Surface* b2enemi21p,SDL_Surface* b2enemi22p,SDL_Surface* b2enemi23p,SDL_Surface* b3enemi11,SDL_Surface* b3enemi12,SDL_Surface* b3enemi13,SDL_Surface* b3enemi11p,SDL_Surface* b3enemi12p,SDL_Surface* b3enemi13p,SDL_Surface* b3enemi21,SDL_Surface* b3enemi22,SDL_Surface* b3enemi23,SDL_Surface* b3enemi21p,SDL_Surface* b3enemi22p,SDL_Surface* b3enemi23p,int *continuer)
{
int coon=1,n1=1,n2=1,n3=1,n4=0,et1=-1,et2=-1,et3=-1,et4=-1;
SDL_Event event;
SDL_Rect po;
while((coon==1)&&(*continuer!=0))
{
SDL_PollEvent(&event);
po=gestion_souris(event);
if((n1==1)&&(pos_press_souris(event,20,270,20,270)==1)){level1(game_arr,game_home,scratch_sword,sword,points,minute0,minute1,minute2,minute3,minute4,minute5,minute6,minute7,minute8,minute9,scratch_flash,scratch_cristal,speed2,score_speed0,score_speed1,score_speed2,score_speed3,score_speed4,score_speed5,score_speed6,score_speed7,score_speed8,score_speed9,speed1,cristal1,cristal2,cristal3,cristal4,cristal5,&et1,musique,desert,scratch,scratch_hit,scratch_jump,scratch_coin,scratch_key,scratch_etoile,scratch_victory,scratch_fail,&coon,&n1,win,etoile,etoile1,next_level,next_level1,home1,score_level,game_over,home,arr_plan,key1,key2,key3,key4,key5,key6,num0,num1,num2,num3,num4,num5,num6,num7,num8,num9,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,game_play,game_pause,heart,screen,background1,background11,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,b1enemi11,b1enemi12,b1enemi13,b1enemi11p,b1enemi12p,b1enemi13p,b1enemi21,b1enemi22,b1enemi23,b1enemi21p,b1enemi22p,b1enemi23p,&(*continuer));}
if((n2==1)&&(pos_press_souris(event,530,780,20,270)==1)){level2(game_arr,game_home,scratch_sword,sword,points,minute0,minute1,minute2,minute3,minute4,minute5,minute6,minute7,minute8,minute9,scratch_flash,scratch_cristal,speed2,score_speed0,score_speed1,score_speed2,score_speed3,score_speed4,score_speed5,score_speed6,score_speed7,score_speed8,score_speed9,speed1,cristal1,cristal2,cristal3,cristal4,cristal5,&et2,musique,ice,scratch,scratch_hit,scratch_jump,scratch_coin,scratch_key,scratch_etoile,scratch_victory,scratch_fail,&coon,&n2,win,etoile,etoile1,next_level,next_level1,home1,score_level,game_over,home,arr_plan,key1,key2,key3,key4,key5,key6,num0,num1,num2,num3,num4,num5,num6,num7,num8,num9,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,game_play,game_pause,heart,screen,background2,background22,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,b2enemi11,b2enemi12,b2enemi13,b2enemi11p,b2enemi12p,b2enemi13p,b2enemi21,b2enemi22,b2enemi23,b2enemi21p,b2enemi22p,b2enemi23p,&(*continuer));}
if((n3==1)&&(pos_press_souris(event,20,270,330,499)==1)){level3(game_arr,game_home,scratch_sword,sword,points,minute0,minute1,minute2,minute3,minute4,minute5,minute6,minute7,minute8,minute9,scratch_flash,scratch_cristal,speed2,score_speed0,score_speed1,score_speed2,score_speed3,score_speed4,score_speed5,score_speed6,score_speed7,score_speed8,score_speed9,speed1,cristal1,cristal2,cristal3,cristal4,cristal5,&et3,musique,jungle,scratch,scratch_hit,scratch_jump,scratch_coin,scratch_key,scratch_etoile,scratch_victory,scratch_fail,&coon,&n3,win,etoile,etoile1,next_level,next_level1,home1,score_level,game_over,home,arr_plan,key1,key2,key3,key4,key5,key6,num0,num1,num2,num3,num4,num5,num6,num7,num8,num9,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,game_play,game_pause,heart,screen,background3,background33,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,b3enemi11,b3enemi12,b3enemi13,b3enemi11p,b3enemi12p,b3enemi13p,b3enemi21,b3enemi22,b3enemi23,b3enemi21p,b3enemi22p,b3enemi23p,&(*continuer));}
if((n1+n2+n3)==0){n4=1;}
if((n4==1)&&(pos_press_souris(event,530,780,330,580)==1)){level4(game_arr,game_home,scratch_sword,sword,points,minute0,minute1,minute2,minute3,minute4,minute5,minute6,minute7,minute8,minute9,scratch_flash,scratch_cristal,speed2,score_speed0,score_speed1,score_speed2,score_speed3,score_speed4,score_speed5,score_speed6,score_speed7,score_speed8,score_speed9,speed1,cristal1,cristal2,cristal3,cristal4,cristal5,scratch,scratch_hit,scratch_jump,scratch_coin,scratch_key,scratch_etoile,scratch_victory,scratch_fail,&coon,&n4,win,etoile,etoile1,next_level,next_level1,home1,score_level,game_over,home,arr_plan,key1,key2,key3,key4,key5,key6,num0,num1,num2,num3,num4,num5,num6,num7,num8,num9,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,game_play,game_pause,heart,screen,background4,background44,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,&(*continuer));}


afficher_load(map,screen,0,0);
if(et1==-1){afficher_load(st10,screen,20,20);}
if(et2==-1){afficher_load(st20,screen,530,20);}
if(et3==-1){afficher_load(st30,screen,20,330);}


if(et1==0){afficher_load(st10,screen,20,20);afficher_load(check,screen,20,20);}
if(et2==0){afficher_load(st20,screen,530,20);afficher_load(check,screen,530,20);}
if(et3==0){afficher_load(st30,screen,20,330);afficher_load(check,screen,20,330);}


if(et1==1){afficher_load(st11,screen,20,20);afficher_load(check,screen,20,20);}
if(et2==1){afficher_load(st21,screen,530,20);afficher_load(check,screen,530,20);}
if(et3==1){afficher_load(st31,screen,20,330);afficher_load(check,screen,20,330);}

if(et1==2){afficher_load(st12,screen,20,20);afficher_load(check,screen,20,20);}
if(et2==2){afficher_load(st22,screen,530,20);afficher_load(check,screen,530,20);}
if(et3==2){afficher_load(st32,screen,20,330);afficher_load(check,screen,20,330);}


if(et1==3){afficher_load(st13,screen,20,20);afficher_load(check,screen,20,20);}
if(et2==3){afficher_load(st23,screen,530,20);afficher_load(check,screen,530,20);}
if(et3==3){afficher_load(st33,screen,20,330);afficher_load(check,screen,20,330);}

if(n4==0){afficher_load(st40,screen,300,300);}
if(n4==1){afficher_load(st41,screen,300,300);}




if(pos_souris_rect(po,50,100,500,550)==1){afficher_load(settings_button3G,screen,50,500);}else{afficher_load(settings_button3,screen,50,500);} 

if(pos_press_souris(event,50,100,500,550)==1){coon=0;*s=0;}

SDL_Flip(screen);
}

}
