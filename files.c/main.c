#include"libfonctions.h"
#include"libmenu.h" 
#include"libsettings.h"
#include"libexit.h" 
#include"liblevels.h" 
#include"liblevel.h" 





int main()
{
SDL_Init(SDL_INIT_EVERYTHING);TTF_Init();
Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);

/*-----------------------------------------*/

int continuer=1,menuplay=0,s=0,m=0,d=0,c,l=3,ss=1,ll=1,aa=0,e=1,k=0,i=0;
char filename[30];

SDL_Event event; 
SDL_Rect pos;

SDL_Rect po;
po.x=50;
po.y=200;
SDL_Rect po2;
po2.x=50;
po2.y=250;
SDL_Rect po3;
po3.x=50;
po3.y=340;

SDL_Surface* screen=NULL;
SDL_Surface* menu = NULL;
SDL_Surface* NewGame = NULL;
SDL_Surface* NewGameG = NULL;
SDL_Surface* LoadGame = NULL;
SDL_Surface* LoadGameG = NULL;
SDL_Surface* Multiplayer = NULL;
SDL_Surface* MultiplayerG = NULL;
SDL_Surface* Settings = NULL;
SDL_Surface* SettingsG = NULL;
SDL_Surface* Exit = NULL;
SDL_Surface* ExitG = NULL;
SDL_Surface* Sound1 = NULL;
SDL_Surface* Sound2 = NULL;
SDL_Surface* Sound2OFF = NULL;

SDL_Surface* setting=NULL;
SDL_Surface* settings_button1=NULL;
SDL_Surface* settings_button2=NULL;
SDL_Surface* settings_button3=NULL;
SDL_Surface* settings_button1G=NULL;
SDL_Surface* settings_button2G=NULL;
SDL_Surface* settings_button3G=NULL;

SDL_Surface* settings_music=NULL;
SDL_Surface* settings_music_button1=NULL;
SDL_Surface* settings_music_button2=NULL;
SDL_Surface* settings_music_button3=NULL;
SDL_Surface* settings_music_button4=NULL;
SDL_Surface* settings_music_button5=NULL;
SDL_Surface* settings_music_button6=NULL;
SDL_Surface* settings_music_sound1=NULL;
SDL_Surface* settings_music_sound2=NULL;
SDL_Surface* settings_music_lecture=NULL;
SDL_Surface* settings_music_pause=NULL;
SDL_Surface* settings_music_arreter1=NULL;
SDL_Surface* settings_music_arreter2=NULL;
SDL_Surface* settings_music_refresh=NULL;

SDL_Surface* exitb=NULL;
SDL_Surface* exit_yes=NULL;
SDL_Surface* exit_YESG=NULL;
SDL_Surface* exit_no=NULL;
SDL_Surface* exit_NOG=NULL;

SDL_Surface *image3[476] ;
SDL_Surface *image2[211] ;
SDL_Surface *image[125] ;




SDL_Surface* background1=NULL; 
SDL_Surface* background11=NULL; 
SDL_Surface* background2=NULL; 
SDL_Surface* background22=NULL;
SDL_Surface* background3=NULL; 
SDL_Surface* background33=NULL;
SDL_Surface* background4=NULL; 
SDL_Surface* background44=NULL;
SDL_Surface* perso=NULL;
SDL_Surface* perso1=NULL;
SDL_Surface* perso2=NULL;
SDL_Surface* perso3=NULL;
SDL_Surface* persop=NULL;
SDL_Surface* perso1p=NULL;
SDL_Surface* perso2p=NULL;
SDL_Surface* perso3p=NULL;
SDL_Surface* b1enemi11=NULL;
SDL_Surface* b1enemi12=NULL;
SDL_Surface* b1enemi13=NULL;
SDL_Surface* b1enemi11p=NULL;
SDL_Surface* b1enemi12p=NULL;
SDL_Surface* b1enemi13p=NULL;
SDL_Surface* b1enemi21=NULL;
SDL_Surface* b1enemi22=NULL;
SDL_Surface* b1enemi23=NULL;
SDL_Surface* b1enemi21p=NULL;
SDL_Surface* b1enemi22p=NULL;
SDL_Surface* b1enemi23p=NULL;

SDL_Surface* b2enemi11=NULL;
SDL_Surface* b2enemi12=NULL;
SDL_Surface* b2enemi13=NULL;
SDL_Surface* b2enemi11p=NULL;
SDL_Surface* b2enemi12p=NULL;
SDL_Surface* b2enemi13p=NULL;
SDL_Surface* b2enemi21=NULL;
SDL_Surface* b2enemi22=NULL;
SDL_Surface* b2enemi23=NULL;
SDL_Surface* b2enemi21p=NULL;
SDL_Surface* b2enemi22p=NULL;
SDL_Surface* b2enemi23p=NULL;

SDL_Surface* b3enemi11=NULL;
SDL_Surface* b3enemi12=NULL;
SDL_Surface* b3enemi13=NULL;
SDL_Surface* b3enemi11p=NULL;
SDL_Surface* b3enemi12p=NULL;
SDL_Surface* b3enemi13p=NULL;
SDL_Surface* b3enemi21=NULL;
SDL_Surface* b3enemi22=NULL;
SDL_Surface* b3enemi23=NULL;
SDL_Surface* b3enemi21p=NULL;
SDL_Surface* b3enemi22p=NULL;
SDL_Surface* b3enemi23p=NULL;

SDL_Surface* heart=NULL;
SDL_Surface* game_play=NULL;
SDL_Surface* game_pause=NULL;
SDL_Surface* game_arr=NULL;
SDL_Surface* game_home=NULL;
SDL_Surface* coin1=NULL;
SDL_Surface* coin2=NULL;
SDL_Surface* coin3=NULL;
SDL_Surface* coin4=NULL;
SDL_Surface* coin5=NULL;
SDL_Surface* coin6=NULL;
SDL_Surface* coin7=NULL;
SDL_Surface* coin8=NULL;

SDL_Surface* num0=NULL;
SDL_Surface* num1=NULL;
SDL_Surface* num2=NULL;
SDL_Surface* num3=NULL;
SDL_Surface* num4=NULL;
SDL_Surface* num5=NULL;
SDL_Surface* num6=NULL;
SDL_Surface* num7=NULL;
SDL_Surface* num8=NULL;
SDL_Surface* num9=NULL;

SDL_Surface* key1=NULL;
SDL_Surface* key2=NULL;
SDL_Surface* key3=NULL;
SDL_Surface* key4=NULL;
SDL_Surface* key5=NULL;
SDL_Surface* key6=NULL;

SDL_Surface* arr_plan=NULL;
SDL_Surface* home=NULL;
SDL_Surface* home1=NULL;
SDL_Surface* game_over=NULL;
SDL_Surface* score_level=NULL;
SDL_Surface* etoile=NULL;
SDL_Surface* etoile1=NULL;
SDL_Surface* next_level=NULL;
SDL_Surface* next_level1=NULL;
SDL_Surface* win=NULL;

SDL_Surface* st10=NULL;
SDL_Surface* st11=NULL;
SDL_Surface* st12=NULL;
SDL_Surface* st13=NULL;

SDL_Surface* st20=NULL;
SDL_Surface* st21=NULL;
SDL_Surface* st22=NULL;
SDL_Surface* st23=NULL;

SDL_Surface* st30=NULL;
SDL_Surface* st31=NULL;
SDL_Surface* st32=NULL;
SDL_Surface* st33=NULL;

SDL_Surface* st40=NULL;
SDL_Surface* st41=NULL;

SDL_Surface* map=NULL;

SDL_Surface* check=NULL;

SDL_Surface* cristal1=NULL;
SDL_Surface* cristal2=NULL;
SDL_Surface* cristal3=NULL;
SDL_Surface* cristal4=NULL;
SDL_Surface* cristal5=NULL;

SDL_Surface* speed1=NULL;
SDL_Surface* speed2=NULL;


SDL_Surface* score_speed0=NULL;
SDL_Surface* score_speed1=NULL;
SDL_Surface* score_speed2=NULL;
SDL_Surface* score_speed3=NULL;
SDL_Surface* score_speed4=NULL;
SDL_Surface* score_speed5=NULL;
SDL_Surface* score_speed6=NULL;
SDL_Surface* score_speed7=NULL;
SDL_Surface* score_speed8=NULL;
SDL_Surface* score_speed9=NULL;

SDL_Surface* minute0=NULL;
SDL_Surface* minute1=NULL;
SDL_Surface* minute2=NULL;
SDL_Surface* minute3=NULL;
SDL_Surface* minute4=NULL;
SDL_Surface* minute5=NULL;
SDL_Surface* minute6=NULL;
SDL_Surface* minute7=NULL;
SDL_Surface* minute8=NULL;
SDL_Surface* minute9=NULL;

SDL_Surface* points=NULL;

SDL_Surface* sword=NULL;


SDL_Surface *texte=NULL;
SDL_Surface *texte2=NULL;
SDL_Surface *texte3=NULL;
TTF_Font *police=NULL;

SDL_Color couleurBlanc={255,255,255};

Mix_Music *musique;
Mix_Music *jungle;
Mix_Music *desert;
Mix_Music *ice;
Mix_Music *logo;
Mix_Chunk *scratch=NULL;
Mix_Chunk *scratch_hit=NULL;
Mix_Chunk *scratch_jump=NULL;
Mix_Chunk *scratch_coin=NULL;
Mix_Chunk *scratch_key=NULL;
Mix_Chunk *scratch_etoile=NULL;
Mix_Chunk *scratch_victory=NULL;
Mix_Chunk *scratch_fail=NULL;
Mix_Chunk *scratch_flash=NULL;
Mix_Chunk *scratch_cristal=NULL;
Mix_Chunk *scratch_sword=NULL;


/*-----------------------------------------*/

menu = IMG_Load( "menu/menu.png" );
NewGame = IMG_Load( "menu/NewGame.png" );
NewGameG = IMG_Load( "menu/NewGameG.png" );
LoadGame = IMG_Load( "menu/LoadGame.png" );
LoadGameG = IMG_Load( "menu/LoadGameG.png" );
Multiplayer = IMG_Load( "menu/Multiplayer.png" );
MultiplayerG = IMG_Load( "menu/MultiplayerG.png" );
Settings = IMG_Load( "menu/Settings.png" );
SettingsG = IMG_Load( "menu/SettingsG.png" );
Exit = IMG_Load( "menu/Exit.png" );
ExitG = IMG_Load( "menu/ExitG.png" );
Sound1 = IMG_Load( "menu/Sound1.png" );
Sound2 = IMG_Load( "menu/Sound2.png" );
Sound2OFF = IMG_Load( "menu/Sound2OFF.png" );

setting = IMG_Load("settings/setting.png");
settings_button1 = IMG_Load("settings/settings_button1.png");
settings_button2 = IMG_Load("settings/settings_button2.png");
settings_button3 = IMG_Load("settings/settings_button3.png");
settings_button1G = IMG_Load("settings/settings_button1G.png");
settings_button2G = IMG_Load("settings/settings_button2G.png");
settings_button3G = IMG_Load("settings/settings_button3G.png");

settings_music= IMG_Load("settings/settings_music/settings_music.png");
settings_music_button1= IMG_Load("settings/settings_music/settings_music_button1.png");
settings_music_button2= IMG_Load("settings/settings_music/settings_music_button2.png");
settings_music_button3= IMG_Load("settings/settings_music/settings_music_button3.png");
settings_music_button4= IMG_Load("settings/settings_music/settings_music_button4.png");
settings_music_button5= IMG_Load("settings/settings_music/settings_music_button5.png");
settings_music_button6= IMG_Load("settings/settings_music/settings_music_button6.png");
settings_music_sound1= IMG_Load("settings/settings_music/settings_music_sound1.png");
settings_music_sound2= IMG_Load("settings/settings_music/settings_music_sound2.png");
settings_music_lecture= IMG_Load("settings/settings_music/settings_music_lecture.png");
settings_music_pause= IMG_Load("settings/settings_music/settings_music_pause.png");
settings_music_arreter1= IMG_Load("settings/settings_music/settings_music_arreter1.png");
settings_music_arreter2= IMG_Load("settings/settings_music/settings_music_arreter2.png");
settings_music_refresh= IMG_Load("settings/settings_music/settings_music_refresh.png");

exitb= IMG_Load("exit/exitb.png");
exit_yes= IMG_Load("exit/exit_yes.png");
exit_YESG= IMG_Load("exit/exit_YESG.png");
exit_no= IMG_Load("exit/exit_no.png");
exit_NOG= IMG_Load("exit/exit_NOG.png");


for (i=0;i<476;i++)
{
sprintf(filename, "cin/cin_%05d.png",i);
image3[i]=IMG_Load (filename);
}




for (i=0;i<211;i++)
{
sprintf(filename, "ani2/logo_%05d.png",i);
image2[i]=IMG_Load (filename);
}


for (i=0;i<125;i++)
{
sprintf(filename, "ani/space comp_%05d.png",i);
image[i]=IMG_Load (filename);
}



background1= IMG_Load("levels/level1/background1.png");
background11= IMG_Load("levels/level1/background11.png");
background2= IMG_Load("levels/level2/background2.png");
background22= IMG_Load("levels/level2/background22.png");
background3= IMG_Load("levels/level3/background3.png");
background33= IMG_Load("levels/level3/background33.png");
background4= IMG_Load("levels/level4/background4.png");
background44= IMG_Load("levels/level4/background44.png");
perso= IMG_Load("levels/perso.png");
perso1= IMG_Load("levels/perso1.png");
perso2= IMG_Load("levels/perso2.png");
perso3= IMG_Load("levels/perso3.png");
persop= IMG_Load("levels/persop.png");
perso1p= IMG_Load("levels/perso1p.png");
perso2p= IMG_Load("levels/perso2p.png");
perso3p= IMG_Load("levels/perso3p.png");
b1enemi11= IMG_Load("levels/level1/b1enemi11.png");
b1enemi12= IMG_Load("levels/level1/b1enemi12.png");
b1enemi13= IMG_Load("levels/level1/b1enemi13.png");
b1enemi11p= IMG_Load("levels/level1/b1enemi11p.png");
b1enemi12p= IMG_Load("levels/level1/b1enemi12p.png");
b1enemi13p= IMG_Load("levels/level1/b1enemi13p.png");
b1enemi21= IMG_Load("levels/level1/b1enemi21.png");
b1enemi22= IMG_Load("levels/level1/b1enemi22.png");
b1enemi23= IMG_Load("levels/level1/b1enemi23.png");
b1enemi21p= IMG_Load("levels/level1/b1enemi21p.png");
b1enemi22p= IMG_Load("levels/level1/b1enemi22p.png");
b1enemi23p= IMG_Load("levels/level1/b1enemi23p.png");

b2enemi11= IMG_Load("levels/level2/b2enemi11.png");
b2enemi12= IMG_Load("levels/level2/b2enemi12.png");
b2enemi13= IMG_Load("levels/level2/b2enemi13.png");
b2enemi11p= IMG_Load("levels/level2/b2enemi11p.png");
b2enemi12p= IMG_Load("levels/level2/b2enemi12p.png");
b2enemi13p= IMG_Load("levels/level2/b2enemi13p.png");
b2enemi21= IMG_Load("levels/level2/b2enemi21.png");
b2enemi22= IMG_Load("levels/level2/b2enemi22.png");
b2enemi23= IMG_Load("levels/level2/b2enemi23.png");
b2enemi21p= IMG_Load("levels/level2/b2enemi21p.png");
b2enemi22p= IMG_Load("levels/level2/b2enemi22p.png");
b2enemi23p= IMG_Load("levels/level2/b2enemi23p.png");

b3enemi11= IMG_Load("levels/level3/b3enemi11.png");
b3enemi12= IMG_Load("levels/level3/b3enemi12.png");
b3enemi13= IMG_Load("levels/level3/b3enemi13.png");
b3enemi11p= IMG_Load("levels/level3/b3enemi11p.png");
b3enemi12p= IMG_Load("levels/level3/b3enemi12p.png");
b3enemi13p= IMG_Load("levels/level3/b3enemi13p.png");
b3enemi21= IMG_Load("levels/level3/b3enemi21.png");
b3enemi22= IMG_Load("levels/level3/b3enemi22.png");
b3enemi23= IMG_Load("levels/level3/b3enemi23.png");
b3enemi21p= IMG_Load("levels/level3/b3enemi21p.png");
b3enemi22p= IMG_Load("levels/level3/b3enemi22p.png");
b3enemi23p= IMG_Load("levels/level3/b3enemi23p.png");

heart= IMG_Load("levels/heart.png");
game_play= IMG_Load("levels/game_play.png");
game_pause= IMG_Load("levels/game_pause.png");
game_arr= IMG_Load("levels/game_arr.png");
game_home= IMG_Load("levels/game_home.png");
coin1= IMG_Load("levels/coin1.png");
coin2= IMG_Load("levels/coin2.png");
coin3= IMG_Load("levels/coin3.png");
coin4= IMG_Load("levels/coin4.png");
coin5= IMG_Load("levels/coin5.png");
coin6= IMG_Load("levels/coin6.png");
coin7= IMG_Load("levels/coin7.png");
coin8= IMG_Load("levels/coin8.png");

num0= IMG_Load("levels/num0.png");
num1= IMG_Load("levels/num1.png");
num2= IMG_Load("levels/num2.png");
num3= IMG_Load("levels/num3.png");
num4= IMG_Load("levels/num4.png");
num5= IMG_Load("levels/num5.png");
num6= IMG_Load("levels/num6.png");
num7= IMG_Load("levels/num7.png");
num8= IMG_Load("levels/num8.png");
num9= IMG_Load("levels/num9.png");

key1= IMG_Load("levels/key1.png");
key2= IMG_Load("levels/key2.png");
key3= IMG_Load("levels/key3.png");
key4= IMG_Load("levels/key4.png");
key5= IMG_Load("levels/key5.png");
key6= IMG_Load("levels/key6.png");

arr_plan= IMG_Load("levels/arr_plan.png");
home= IMG_Load("levels/home.png");
home1= IMG_Load("levels/home1.png");
game_over= IMG_Load("levels/game_over.png");
score_level= IMG_Load("levels/score_level.png");
etoile= IMG_Load("levels/etoile.png");
etoile1= IMG_Load("levels/etoile1.png");
next_level= IMG_Load("levels/next_level.png");
next_level1= IMG_Load("levels/next_level1.png");
win= IMG_Load("levels/win.png");

st10= IMG_Load("levels/st10.png");
st11= IMG_Load("levels/st11.png");
st12= IMG_Load("levels/st12.png");
st13= IMG_Load("levels/st13.png");

st20= IMG_Load("levels/st20.png");
st21= IMG_Load("levels/st21.png");
st22= IMG_Load("levels/st22.png");
st23= IMG_Load("levels/st23.png");

st30= IMG_Load("levels/st30.png");
st31= IMG_Load("levels/st31.png");
st32= IMG_Load("levels/st32.png");
st33= IMG_Load("levels/st33.png");

st40= IMG_Load("levels/st40.png");
st41= IMG_Load("levels/st41.png");

map= IMG_Load("levels/map.png");

check= IMG_Load("levels/check.png");

cristal1= IMG_Load("levels/cristal1.png");
cristal2= IMG_Load("levels/cristal2.png");
cristal3= IMG_Load("levels/cristal3.png");
cristal4= IMG_Load("levels/cristal4.png");
cristal5= IMG_Load("levels/cristal5.png");

speed1= IMG_Load("levels/speed1.png");
speed2= IMG_Load("levels/speed2.png");


score_speed0= IMG_Load("levels/score_speed0.png");
score_speed1= IMG_Load("levels/score_speed1.png");
score_speed2= IMG_Load("levels/score_speed2.png");
score_speed3= IMG_Load("levels/score_speed3.png");
score_speed4= IMG_Load("levels/score_speed4.png");
score_speed5= IMG_Load("levels/score_speed5.png");
score_speed6= IMG_Load("levels/score_speed6.png");
score_speed7= IMG_Load("levels/score_speed7.png");
score_speed8= IMG_Load("levels/score_speed8.png");
score_speed9= IMG_Load("levels/score_speed9.png");

minute0= IMG_Load("levels/minute0.png");
minute1= IMG_Load("levels/minute1.png");
minute2= IMG_Load("levels/minute2.png");
minute3= IMG_Load("levels/minute3.png");
minute4= IMG_Load("levels/minute4.png");
minute5= IMG_Load("levels/minute5.png");
minute6= IMG_Load("levels/minute6.png");
minute7= IMG_Load("levels/minute7.png");
minute8= IMG_Load("levels/minute8.png");
minute9= IMG_Load("levels/minute9.png");

points= IMG_Load("levels/points.png");

sword= IMG_Load("levels/sword.png");

police=TTF_OpenFont("texte.ttf",65);
texte=TTF_RenderText_Blended(police,"NO/YES?",couleurBlanc);
texte2=TTF_RenderText_Blended(police,"music:",couleurBlanc);
texte3=TTF_RenderText_Blended(police,"effects:",couleurBlanc);


musique = Mix_LoadMUS("music/Menu.mp3");
jungle = Mix_LoadMUS("music/jungle.mp3");
desert = Mix_LoadMUS("music/desert.mp3");
ice = Mix_LoadMUS("music/ice.mp3");
logo = Mix_LoadMUS("music/logo.mp3");
scratch= Mix_LoadWAV("music/scratch.wav");
scratch_hit= Mix_LoadWAV("music/scratch_hit.wav");
scratch_jump= Mix_LoadWAV("music/scratch_jump.wav");
scratch_coin= Mix_LoadWAV("music/scratch_coin.wav");
scratch_key= Mix_LoadWAV("music/scratch_key.wav");
scratch_etoile= Mix_LoadWAV("music/scratch_etoile.wav");
scratch_victory= Mix_LoadWAV("music/scratch_victory.wav");
scratch_fail= Mix_LoadWAV("music/scratch_fail.wav");
scratch_flash= Mix_LoadWAV("music/scratch_flash.wav");
scratch_cristal= Mix_LoadWAV("music/scratch_cristal.wav");
scratch_sword= Mix_LoadWAV("music/scratch_sword.wav");
/*-----------------------------------------*/

screen=SDL_SetVideoMode(800,600,32, SDL_HWSURFACE | SDL_DOUBLEBUF);
SDL_WM_SetCaption("game", NULL);


/*-----------------------------------------*/
Mix_PlayMusic(logo, 0);
for (i=0;i<211;i++)
{
SDL_BlitSurface (image2[i],NULL,screen,NULL);
SDL_Flip (screen);
SDL_Delay (40);

}

Mix_PlayMusic(musique, -1);
Mix_VolumeMusic((MIX_MAX_VOLUME*40)/100);
for (i=0;i<125;i++)
{
SDL_BlitSurface (image[i],NULL,screen,NULL);
if(i==124){afficher_all(screen,menu,NewGame,LoadGame,Multiplayer,Settings,Exit,Sound1,Sound2);}
SDL_Flip (screen);
SDL_Delay (40);

}

while(continuer!=0)
{
 
SDL_WaitEvent(&event); 

continuer=gestion_clavier(event);

pos=gestion_souris(event);
c=gestion_clavier(event);

if(s==0)
{

menu1(&ll,ss,c,scratch,pos,event,&menuplay,screen,menu,NewGame,LoadGame,Multiplayer,Settings,Exit,Sound1,Sound2,NewGameG,LoadGameG,MultiplayerG,SettingsG,ExitG,Sound2OFF);

}



switch(menuplay)
{
case 1:{if((pos_press_souris(event,50,350,250,293)==1)||(c==5)){
for (i=0;i<476;i++)
{
SDL_BlitSurface (image3[i],NULL,screen,NULL);
SDL_Flip (screen);
SDL_Delay (40);

}


 levelss(game_arr,game_home,scratch_sword,sword,points,minute0,minute1,minute2,minute3,minute4,minute5,minute6,minute7,minute8,minute9,scratch_flash,scratch_cristal,speed2,score_speed0,score_speed1,score_speed2,score_speed3,score_speed4,score_speed5,score_speed6,score_speed7,score_speed8,score_speed9,speed1,cristal1,cristal2,cristal3,cristal4,cristal5,map,check,st10,st11,st12,st13,st20,st21,st22,st23,st30,st31,st32,st33,st40,st41,musique,ice,jungle,desert,scratch,scratch_hit,scratch_jump,scratch_coin,scratch_key,scratch_etoile,scratch_victory,scratch_fail,settings_button3,settings_button3G,&s,win,etoile,etoile1,next_level,next_level1,home1,score_level,game_over,home,arr_plan,key1,key2,key3,key4,key5,key6,num0,num1,num2,num3,num4,num5,num6,num7,num8,num9,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,game_play,game_pause,heart,screen,background1,background11,background2,background22,background3,background33,background4,background44,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,b1enemi11,b1enemi12,b1enemi13,b1enemi11p,b1enemi12p,b1enemi13p,b1enemi21,b1enemi22,b1enemi23,b1enemi21p,b1enemi22p,b1enemi23p,b2enemi11,b2enemi12,b2enemi13,b2enemi11p,b2enemi12p,b2enemi13p,b2enemi21,b2enemi22,b2enemi23,b2enemi21p,b2enemi22p,b2enemi23p,b3enemi11,b3enemi12,b3enemi13,b3enemi11p,b3enemi12p,b3enemi13p,b3enemi21,b3enemi22,b3enemi23,b3enemi21p,b3enemi22p,b3enemi23p,&continuer);menu1(&ll,ss,c,scratch,pos,event,&menuplay,screen,menu,NewGame,LoadGame,Multiplayer,Settings,Exit,Sound1,Sound2,NewGameG,LoadGameG,MultiplayerG,SettingsG,ExitG,Sound2OFF);
}    }break;
case 2:{}break;
case 3:{}break;
case 4:{settings1(&aa,&ll,&ss,c,pos,scratch,event,screen,setting,settings_button1,settings_button2,settings_button3,settings_button1G,settings_button2G,settings_button3G,&s,&m,&d,settings_music,settings_music_button1,settings_music_button2,settings_music_button3,settings_music_button4,settings_music_button5,settings_music_button6,settings_music_sound1,settings_music_sound2,settings_music_lecture,settings_music_pause,settings_music_arreter1,settings_music_arreter2,settings_music_refresh,&l);
if(s==2){SDL_BlitSurface(texte2,NULL,screen,&po2);SDL_BlitSurface(texte3,NULL,screen,&po3);}}break;
case 5:{if((pos_press_souris(event,50,350,450,493)==1)||(c==5)||(s==3)){exit1(&k,event,&continuer,&ss,&s,&e,c,pos,scratch,screen,exitb,exit_yes,exit_YESG,exit_no,exit_NOG); SDL_BlitSurface(texte,NULL,screen,&po);}}break;
}




SDL_Flip(screen);
}

/*-----------------------------------------*/

SDL_FreeSurface(NewGame);
SDL_FreeSurface(NewGameG);
SDL_FreeSurface(LoadGame);
SDL_FreeSurface(LoadGameG);
SDL_FreeSurface(Multiplayer);
SDL_FreeSurface(MultiplayerG);
SDL_FreeSurface(Settings);
SDL_FreeSurface(SettingsG);
SDL_FreeSurface(Exit);
SDL_FreeSurface(ExitG);
SDL_FreeSurface(Sound1);
SDL_FreeSurface(Sound2);
SDL_FreeSurface(Sound2OFF);

SDL_FreeSurface(settings_button1);
SDL_FreeSurface(settings_button2);
SDL_FreeSurface(settings_button3);
SDL_FreeSurface(settings_button1G);
SDL_FreeSurface(settings_button2G);
SDL_FreeSurface(settings_button3G);
SDL_FreeSurface(setting);

SDL_FreeSurface(settings_music);
SDL_FreeSurface(settings_music_button1);
SDL_FreeSurface(settings_music_button2);
SDL_FreeSurface(settings_music_button3);
SDL_FreeSurface(settings_music_button4);
SDL_FreeSurface(settings_music_button5);
SDL_FreeSurface(settings_music_button6);
SDL_FreeSurface(settings_music_sound1);
SDL_FreeSurface(settings_music_sound2);
SDL_FreeSurface(settings_music_lecture);
SDL_FreeSurface(settings_music_pause);
SDL_FreeSurface(settings_music_arreter1);
SDL_FreeSurface(settings_music_arreter2);
SDL_FreeSurface(settings_music_refresh);

SDL_FreeSurface(exitb);
SDL_FreeSurface(exit_yes);
SDL_FreeSurface(exit_YESG);
SDL_FreeSurface(exit_no);
SDL_FreeSurface(exit_NOG);

SDL_FreeSurface(menu); 
SDL_FreeSurface(screen);

for (i=0;i<476;i++)
{SDL_FreeSurface (image3[i]);}

for (i=0;i<211;i++)
{SDL_FreeSurface (image2[i]);}

for (i=0;i<125;i++)
{SDL_FreeSurface (image[i]);}



SDL_FreeSurface(background1);
SDL_FreeSurface(background11);
SDL_FreeSurface(background2);
SDL_FreeSurface(background22);
SDL_FreeSurface(background3);
SDL_FreeSurface(background33);
SDL_FreeSurface(background4);
SDL_FreeSurface(background44);
SDL_FreeSurface(perso);
SDL_FreeSurface(perso1);
SDL_FreeSurface(perso2);
SDL_FreeSurface(perso3);
SDL_FreeSurface(persop);
SDL_FreeSurface(perso1p);
SDL_FreeSurface(perso2p);
SDL_FreeSurface(perso3p);
SDL_FreeSurface(b1enemi11);
SDL_FreeSurface(b1enemi12);
SDL_FreeSurface(b1enemi13);
SDL_FreeSurface(b1enemi11p);
SDL_FreeSurface(b1enemi12p);
SDL_FreeSurface(b1enemi13p);
SDL_FreeSurface(b1enemi21);
SDL_FreeSurface(b1enemi22);
SDL_FreeSurface(b1enemi23);
SDL_FreeSurface(b1enemi21p);
SDL_FreeSurface(b1enemi22p);
SDL_FreeSurface(b1enemi23p);



SDL_FreeSurface(b2enemi11);
SDL_FreeSurface(b2enemi12);
SDL_FreeSurface(b2enemi13);
SDL_FreeSurface(b2enemi11p);
SDL_FreeSurface(b2enemi12p);
SDL_FreeSurface(b2enemi13p);
SDL_FreeSurface(b2enemi21);
SDL_FreeSurface(b2enemi22);
SDL_FreeSurface(b2enemi23);
SDL_FreeSurface(b2enemi21p);
SDL_FreeSurface(b2enemi22p);
SDL_FreeSurface(b2enemi23p);

SDL_FreeSurface(b3enemi11);
SDL_FreeSurface(b3enemi12);
SDL_FreeSurface(b3enemi13);
SDL_FreeSurface(b3enemi11p);
SDL_FreeSurface(b3enemi12p);
SDL_FreeSurface(b3enemi13p);
SDL_FreeSurface(b3enemi21);
SDL_FreeSurface(b3enemi22);
SDL_FreeSurface(b3enemi23);
SDL_FreeSurface(b3enemi21p);
SDL_FreeSurface(b3enemi22p);
SDL_FreeSurface(b3enemi23p);

SDL_FreeSurface(heart);
SDL_FreeSurface(game_play);
SDL_FreeSurface(game_pause);
SDL_FreeSurface(game_arr);
SDL_FreeSurface(game_home);
SDL_FreeSurface(coin1);
SDL_FreeSurface(coin2);
SDL_FreeSurface(coin3);
SDL_FreeSurface(coin4);
SDL_FreeSurface(coin5);
SDL_FreeSurface(coin6);
SDL_FreeSurface(coin7);
SDL_FreeSurface(coin8);

SDL_FreeSurface(num0);
SDL_FreeSurface(num1);
SDL_FreeSurface(num2);
SDL_FreeSurface(num3);
SDL_FreeSurface(num4);
SDL_FreeSurface(num5);
SDL_FreeSurface(num6);
SDL_FreeSurface(num7);
SDL_FreeSurface(num8);
SDL_FreeSurface(num9);

SDL_FreeSurface(key1);
SDL_FreeSurface(key2);
SDL_FreeSurface(key3);
SDL_FreeSurface(key4);
SDL_FreeSurface(key5);
SDL_FreeSurface(key6);

SDL_FreeSurface(arr_plan);
SDL_FreeSurface(home);
SDL_FreeSurface(home1);
SDL_FreeSurface(game_over);
SDL_FreeSurface(score_level);
SDL_FreeSurface(etoile);
SDL_FreeSurface(etoile1);
SDL_FreeSurface(next_level);
SDL_FreeSurface(next_level1);
SDL_FreeSurface(win);

SDL_FreeSurface(st10);
SDL_FreeSurface(st11);
SDL_FreeSurface(st12);
SDL_FreeSurface(st13);

SDL_FreeSurface(st20);
SDL_FreeSurface(st21);
SDL_FreeSurface(st22);
SDL_FreeSurface(st23);

SDL_FreeSurface(st30);
SDL_FreeSurface(st31);
SDL_FreeSurface(st32);
SDL_FreeSurface(st33);

SDL_FreeSurface(st40);
SDL_FreeSurface(st41);

SDL_FreeSurface(map);

SDL_FreeSurface(check);

SDL_FreeSurface(cristal1);
SDL_FreeSurface(cristal2);
SDL_FreeSurface(cristal3);
SDL_FreeSurface(cristal4);
SDL_FreeSurface(cristal5);

SDL_FreeSurface(speed1);
SDL_FreeSurface(speed2);

SDL_FreeSurface(score_speed0);
SDL_FreeSurface(score_speed1);
SDL_FreeSurface(score_speed2);
SDL_FreeSurface(score_speed3);
SDL_FreeSurface(score_speed4);
SDL_FreeSurface(score_speed5);
SDL_FreeSurface(score_speed6);
SDL_FreeSurface(score_speed7);
SDL_FreeSurface(score_speed8);
SDL_FreeSurface(score_speed9);

SDL_FreeSurface(minute0);
SDL_FreeSurface(minute1);
SDL_FreeSurface(minute2);
SDL_FreeSurface(minute3);
SDL_FreeSurface(minute4);
SDL_FreeSurface(minute5);
SDL_FreeSurface(minute6);
SDL_FreeSurface(minute7);
SDL_FreeSurface(minute8);
SDL_FreeSurface(minute9);

SDL_FreeSurface(points);

SDL_FreeSurface(sword);


SDL_FreeSurface(texte);
SDL_FreeSurface(texte2);
SDL_FreeSurface(texte3);
TTF_CloseFont(police);

Mix_CloseAudio();
SDL_Quit();

return 0;
}
