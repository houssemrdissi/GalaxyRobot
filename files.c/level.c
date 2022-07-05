#include"libfonctions.h"
#include"liblevel.h"
#include"libmove.h"
#include"libcollision.h"


void level1(SDL_Surface* game_arr,SDL_Surface* game_home,Mix_Chunk* scratch_sword,SDL_Surface* sword,SDL_Surface* points,SDL_Surface* minute0,SDL_Surface* minute1,SDL_Surface* minute2,SDL_Surface* minute3,SDL_Surface* minute4,SDL_Surface* minute5,SDL_Surface* minute6,SDL_Surface* minute7,SDL_Surface* minute8,SDL_Surface* minute9,Mix_Chunk* scratch_flash,Mix_Chunk* scratch_cristal,SDL_Surface* speed2,SDL_Surface* score_speed0,SDL_Surface* score_speed1,SDL_Surface* score_speed2,SDL_Surface* score_speed3,SDL_Surface* score_speed4,SDL_Surface* score_speed5,SDL_Surface* score_speed6,SDL_Surface* score_speed7,SDL_Surface* score_speed8,SDL_Surface* score_speed9,SDL_Surface* speed1,SDL_Surface* cristal1,SDL_Surface* cristal2,SDL_Surface* cristal3,SDL_Surface* cristal4,SDL_Surface* cristal5,int *et,Mix_Music *musique,Mix_Music *desert,Mix_Chunk* scratch,Mix_Chunk* scratch_hit,Mix_Chunk* scratch_jump,Mix_Chunk* scratch_coin,Mix_Chunk* scratch_key,Mix_Chunk* scratch_etoile,Mix_Chunk* scratch_victory,Mix_Chunk* scratch_fail,int *coon,int *n1,SDL_Surface* win,SDL_Surface* etoile,SDL_Surface* etoile1,SDL_Surface* next_level,SDL_Surface* next_level1,SDL_Surface* home1,SDL_Surface* score_level,SDL_Surface* game_over,SDL_Surface* home,SDL_Surface* arr_plan,SDL_Surface* key1,SDL_Surface* key2,SDL_Surface* key3,SDL_Surface* key4,SDL_Surface* key5,SDL_Surface* key6,SDL_Surface* num0,SDL_Surface* num1,SDL_Surface* num2,SDL_Surface* num3,SDL_Surface* num4,SDL_Surface* num5,SDL_Surface* num6,SDL_Surface* num7,SDL_Surface* num8,SDL_Surface* num9,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,SDL_Surface* game_play,SDL_Surface* game_pause,SDL_Surface* heart,SDL_Surface* screen,SDL_Surface* background1,SDL_Surface* background11,SDL_Surface* perso,SDL_Surface* perso1,SDL_Surface* perso2,SDL_Surface* perso3,SDL_Surface* persop,SDL_Surface* perso1p,SDL_Surface* perso2p,SDL_Surface* perso3p,SDL_Surface* b1enemi11,SDL_Surface* b1enemi12,SDL_Surface* b1enemi13,SDL_Surface* b1enemi11p,SDL_Surface* b1enemi12p,SDL_Surface* b1enemi13p,SDL_Surface* b1enemi21,SDL_Surface* b1enemi22,SDL_Surface* b1enemi23,SDL_Surface* b1enemi21p,SDL_Surface* b1enemi22p,SDL_Surface* b1enemi23p,int *continuer)
{

SDL_Event event; 
int co1=0,co2=0,co3=0,co4=0,co5=0,
co6=0,co7=0,co8=0,co9=0,co10=0,
co11=0,co12=0,co13=0,co14=0,co15=0,
co16=0,co17=0,co18=0,co19=0,co20=0,
co21=0,co22=0,co23=0,co24=0,co25=0,co26=0,co27=0,
co28=0,co29=0,co30=0,co31=0,co32=0,
co33=0,co34=0,co35=0,co36=0,co37=0,
co38=0,co39=0,co40=0,co41=0,co42=0,
co43=0,co44=0,co45=0,co46=0,co47=0,
co48=0,co49=0,co50=0,co51=0,co52=0,co53=0,co54=0,
co55=0,co56=0,co57=0,co58=0,co59=0,
co60=0,co61=0,co62=0,co63=0,co64=0,
co65=0,co66=0,co67=0,co68=0,co69=0,
co70=0,co71=0,co72=0,co73=0,co74=0,
co75=0,co76=0,co77=0,co78=0,co79=0,
co80=0,co81=0,co82=0,co83=0,co84=0,
co85=0,co86=0,co87=0,co88=0,co89=0,
co90=0,co91=0,co92=0,co93=0,co94=0,
co95=0,co96=0,co97=0,co98=0,co99=0,co100=0,
co101=0,co102=0,co103=0,co104=0,co105=0,co106=0,co107=0,
score=0;
int xe1=800,ye1=280,xe2=800,ye2=280,xe3=800,ye3=240,xe4=800,ye4=360,xe5=800,ye5=220;
int mmm1=1,mmm2=1,mmm3=1,mmm4=1,mmm5=1,mmm6=1,mmm7=1,mmm8=1,mmm9=1,mmm10=1,mmm11=1,mmm12=1,mmm13=1,mmm14=1,mmm15=1,mmm16=1,mmm17=1,mmm18=1,mmm19=1,mmm20=1,
mmm21=1,mmm22=1,mmm23=1,mmm24=1,mmm25=1,mmm26=1,mmm27=1,mmm28=1,mmm29=1,mmm30=1,mmm31=1,mmm32=1,mmm33=1,mmm34=1,mmm35=1,mmm36=1,mmm37=1,mmm38=1,mmm39=1,mmm40=1,
mmm41=1,mmm42=1,mmm43=1,mmm44=1,mmm45=1,mmm46=1,mmm47=1,mmm48=1,mmm49=1,mmm50=1,mmm51=1,mmm52=1,mmm53=1,mmm54=1,
mmm55=1,mmm56=1,mmm57=1,mmm58=1,mmm59=1,mmm60=1,mmm61=1,mmm62=1,mmm63=1,mmm64=1,mmm65=1,mmm66=1,mmm67=1,mmm68=1,mmm69=1,
mmm70=1,mmm71=1,mmm72=1,mmm73=1,mmm74=1,mmm75=1,mmm76=1,mmm77=1,mmm78=1,mmm79=1,mmm80=1,mmm81=1,mmm82=1,mmm83=1,mmm84=1,
mmm85=1,mmm86=1,mmm87=1,mmm88=1,mmm89=1,mmm90=1,mmm91=1,mmm92=1,mmm93=1,mmm94=1,mmm95=1,mmm96=1,mmm97=1,mmm98=1,mmm99=1,mmm100=1,
mmm101=1,mmm102=1,mmm103=1,mmm104=1,mmm105=1,mmm106=0;
int cys=300,ccys=0,minu=2,min=59,mi=0,cristals=1,v=0,t=0,tt=0,mo=0,sc6=1,sc5=1,sc1=1,sc2=1,sc3=1,sc4=1,connn=0,conn=1,mmmm=1,keys=3,e=0,ee=0,dd=0,d=6,con=1,c=-1,x=0,xx=0,y=0,yy=360,k=0,kk=0,kkk=0,a=1,aa=5,b=0,n=1,o=0,m=1,mm1=1,mm2=1,mm3=1,mm4=1,mm5=1,s=0,nn=0,j=0,ce1=0,ce2=0,ce3=0,ce4=0,ce5=0,nnn1=0,nnn2=0,nnn3=0,nnn4=0,nnn5=0,nnnn=0,vie=3;
Uint8 *keystates=SDL_GetKeyState(NULL);
SDL_Rect po;
Mix_PlayMusic(desert, -1);

while((con!=0)&&(*continuer!=0))
{
k=0;kk=0;mo=0;

SDL_PollEvent(&event);

*continuer=gestion_clavier(event);
c=gestion_clavier(event);
po=gestion_souris(event);

if((e==0)&&(pos_press_souris(event,750,800,0,50)==1)){e=1;SDL_Delay(150); }
if((e==1)&&(pos_press_souris(event,425,475,125,175)==1)){e=0;SDL_Delay(150); }
if((e==0)&&(ee==0))
{
/*-----move-----*/
if(c==3){move_right(&x,&xx,&n,&nnnn);k=1;m++; }
if(c==4){move_left(&x,&xx,&n,&nnnn);k=1;m--; } 

if(pos_press_souris(event,xx,800,0,600)==1){move_right(&x,&xx,&n,&nnnn);k=1;m++;}
if(pos_press_souris(event,0,xx,0,600)==1){move_left(&x,&xx,&n,&nnnn);k=1;m--;}

if(k==0){move_keystate(keystates,&x,&xx,&n,&nnnn,&m,&mo);}

if((c==1)||((event.button.button==SDL_BUTTON_RIGHT)&&(event.type==SDL_MOUSEBUTTONDOWN))){jump_up(scratch_jump,&a,&o,&yy,&kk,&kkk);m=3;}
if(nnnn==1){ xx+=4;x+=4; if( (xx==500) ){nnnn=0;} }
if(nnnn==2){ xx-=4;x-=4;  if( (xx==300) ){nnnn=0;} }

/*--------------*/


collision_background(background11,&xx,&yy,&s,&x,&kk,&kkk,&a,&o,&m,&nnnn);
if(kk==0){jump_down(&a,&o,&yy,&kkk,&m);}


if(nn==0){if(collision_ab(x,xx,yy,xe1,ye1)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe2,ye2)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe3,ye3)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe4,ye4)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe5,ye5)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(yy>=600){xe1=800;ye1=280;xe2=800;ye2=280;xe3=800;ye3=240;xe4=800;ye4=360;xe5=800;ye5=220;x=0; xx=0;yy=360;vie--;if(vie==0){conn=0;} }
if(nn==1){d--;if(d==0){d=10;dd++;}if(dd==10){dd=0;nn=0;} }

afficher_load(background1,screen,x,y);if(m==7){m=1;}if(m<=0){m=6;}
if((k==0)&&(c==-1)&&(mo==0)){m=0;}
if(d>5){animation_perso(screen,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,xx,yy,n,m); }



if(vie==3){afficher_load(heart,screen,0,0);afficher_load(heart,screen,50,0);afficher_load(heart,screen,100,0);}
if(vie==2){afficher_load(heart,screen,0,0);afficher_load(heart,screen,50,0);}
if(vie==1){afficher_load(heart,screen,0,0);}


animation_score(scratch_coin,&co1,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm1,-100,-900,250);
animation_score(scratch_coin,&co2,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm2,-120,-920,250);
animation_score(scratch_coin,&co3,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm3,-140,-940,250);
animation_score(scratch_coin,&co4,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm4,-160,-960,250);
animation_score(scratch_coin,&co5,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm5,-180,-980,250);

animation_score(scratch_coin,&co6,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm6,-300,-1100,250);
animation_score(scratch_coin,&co7,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm7,-320,-1120,250);
animation_score(scratch_coin,&co8,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm8,-340,-1140,250);
animation_score(scratch_coin,&co9,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm9,-360,-1160,250);
animation_score(scratch_coin,&co10,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm10,-380,-1180,250);

animation_score(scratch_coin,&co11,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm11,-700,-1500,250);
animation_score(scratch_coin,&co12,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm12,-720,-1520,220);
animation_score(scratch_coin,&co13,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm13,-740,-1540,200);
animation_score(scratch_coin,&co14,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm14,-760,-1560,220);
animation_score(scratch_coin,&co15,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm15,-780,-1580,250);

animation_score(scratch_coin,&co16,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm16,-1100,-1900,250);
animation_score(scratch_coin,&co17,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm17,-1120,-1920,220);
animation_score(scratch_coin,&co18,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm18,-1140,-1940,200);
animation_score(scratch_coin,&co19,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm19,-1160,-1960,220);
animation_score(scratch_coin,&co20,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm20,-1180,-1980,250);

animation_score(scratch_coin,&co70,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm70,-1820,-2620,340);
animation_score(scratch_coin,&co71,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm71,-1800,-2600,340);

animation_score(scratch_coin,&co72,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm72,-2210,-3010,340);
animation_score(scratch_coin,&co73,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm73,-2190,-2990,340);

animation_score(scratch_coin,&co74,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm74,-1880,-2680,230);
animation_score(scratch_coin,&co75,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm75,-1900,-2700,230);
animation_score(scratch_coin,&co76,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm76,-1920,-2720,230);

animation_score(scratch_coin,&co77,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm77,-2090,-2890,230);
animation_score(scratch_coin,&co78,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm78,-2110,-2910,230);
animation_score(scratch_coin,&co79,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm79,-2130,-2930,230);

animation_score(scratch_coin,&co80,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm80,-1970,-2770,130);
animation_score(scratch_coin,&co81,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm81,-1990,-2790,130);
animation_score(scratch_coin,&co82,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm82,-2010,-2810,130);
animation_score(scratch_coin,&co83,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm83,-2030,-2830,130);
animation_score(scratch_coin,&co84,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm84,-2050,-2850,130);

animation_score(scratch_coin,&co21,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm21,-2740,-3540,350);
animation_score(scratch_coin,&co22,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm22,-2760,-3560,320);
animation_score(scratch_coin,&co23,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm23,-2780,-3580,300);
animation_score(scratch_coin,&co24,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm24,-2800,-3600,320);
animation_score(scratch_coin,&co25,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm25,-2820,-3620,350);
animation_score(scratch_coin,&co26,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm26,-2720,-3520,380);
animation_score(scratch_coin,&co27,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm27,-2840,-3640,380);

animation_score(scratch_coin,&co28,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm28,-4000,-4800,250);
animation_score(scratch_coin,&co29,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm29,-4020,-4820,220);
animation_score(scratch_coin,&co30,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm30,-4040,-4840,200);
animation_score(scratch_coin,&co31,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm31,-4060,-4860,220);
animation_score(scratch_coin,&co32,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm32,-4080,-4880,250);

animation_score(scratch_coin,&co33,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm33,-4200,-5000,370);
animation_score(scratch_coin,&co34,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm34,-4220,-5020,370);
animation_score(scratch_coin,&co35,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm35,-4240,-5040,370);
animation_score(scratch_coin,&co36,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm36,-4260,-5060,370);
animation_score(scratch_coin,&co37,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm37,-4280,-5080,370);

animation_score(scratch_coin,&co38,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm38,-4400,-5200,250);
animation_score(scratch_coin,&co39,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm39,-4420,-5220,220);
animation_score(scratch_coin,&co40,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm40,-4440,-5240,200);
animation_score(scratch_coin,&co41,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm41,-4460,-5260,220);
animation_score(scratch_coin,&co42,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm42,-4480,-5280,250);

animation_score(scratch_coin,&co85,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm85,-4910,-5710,330);
animation_score(scratch_coin,&co86,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm86,-4830,-5630,330);
animation_score(scratch_coin,&co87,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm87,-4850,-5650,330);
animation_score(scratch_coin,&co88,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm88,-4870,-5670,330);
animation_score(scratch_coin,&co89,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm89,-4890,-5690,330);

animation_score(scratch_coin,&co90,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm90,-5110,-5810,330);
animation_score(scratch_coin,&co91,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm91,-5030,-5830,330);
animation_score(scratch_coin,&co92,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm92,-5050,-5850,330);
animation_score(scratch_coin,&co93,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm93,-5070,-5870,330);
animation_score(scratch_coin,&co94,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm94,-5090,-5890,330);


animation_score(scratch_coin,&co95,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm95,-4960,-5760,300);
animation_score(scratch_coin,&co96,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm96,-4960,-5760,280);
animation_score(scratch_coin,&co97,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm97,-4960,-5760,260);
animation_score(scratch_coin,&co98,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm98,-4980,-5780,300);
animation_score(scratch_coin,&co99,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm99,-4980,-5780,280);
animation_score(scratch_coin,&co100,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm100,-4980,-5780,260);

animation_score(scratch_coin,&co43,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm43,-5350,-6150,270);
animation_score(scratch_coin,&co44,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm44,-5370,-6170,270);
animation_score(scratch_coin,&co45,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm45,-5390,-6190,270);
animation_score(scratch_coin,&co46,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm46,-5410,-6210,270);
animation_score(scratch_coin,&co47,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm47,-5430,-6230,270);

animation_score(scratch_coin,&co48,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm48,-5600,-6400,220);
animation_score(scratch_coin,&co49,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm49,-5620,-6420,200);
animation_score(scratch_coin,&co50,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm50,-5640,-6440,220);
animation_score(scratch_coin,&co51,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm51,-5660,-6460,240);
animation_score(scratch_coin,&co52,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm52,-5680,-6480,260);
animation_score(scratch_coin,&co53,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm53,-5700,-6500,280);
animation_score(scratch_coin,&co54,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm54,-5720,-6520,300);

animation_score(scratch_coin,&co55,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm55,-5850,-6650,270);
animation_score(scratch_coin,&co56,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm56,-5870,-6670,270);
animation_score(scratch_coin,&co57,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm57,-5890,-6690,270);
animation_score(scratch_coin,&co58,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm58,-5910,-6710,270);
animation_score(scratch_coin,&co59,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm59,-5930,-6730,270);

animation_score(scratch_coin,&co60,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm60,-6050,-6850,270);
animation_score(scratch_coin,&co61,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm61,-6070,-6870,270);
animation_score(scratch_coin,&co62,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm62,-6090,-6890,270);
animation_score(scratch_coin,&co63,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm63,-6110,-6910,270);
animation_score(scratch_coin,&co64,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm64,-6130,-6930,270);

animation_score(scratch_coin,&co65,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm65,-6450,-7250,250);
animation_score(scratch_coin,&co66,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm66,-6470,-7270,220);
animation_score(scratch_coin,&co67,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm67,-6490,-7290,200);
animation_score(scratch_coin,&co68,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm68,-6510,-7310,220);
animation_score(scratch_coin,&co69,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm69,-6530,-7330,250);


animation_score(scratch_key,&co102,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm102,-1350,-2150,250);
animation_score(scratch_key,&co103,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm103,-5500,-6300,200);
animation_score(scratch_key,&co104,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm104,-2780,-3580,200);

animation_enemi(screen,b1enemi11,b1enemi12,b1enemi13,b1enemi11p,b1enemi12p,b1enemi13p,x,&xe1,&ye1,&nnn1,&ce1,&mm1,80,-400,-1280);
animation_enemi(screen,b1enemi11,b1enemi12,b1enemi13,b1enemi11p,b1enemi12p,b1enemi13p,x,&xe2,&ye2,&nnn2,&ce2,&mm2,150,-1200,-2300);
animation_enemi(screen,b1enemi21,b1enemi22,b1enemi23,b1enemi21p,b1enemi22p,b1enemi23p,x,&xe3,&ye3,&nnn3,&ce3,&mm3,300,-2500,-3600);
animation_enemi(screen,b1enemi21,b1enemi22,b1enemi23,b1enemi21p,b1enemi22p,b1enemi23p,x,&xe4,&ye4,&nnn4,&ce4,&mm4,300,-3600,-4700);
animation_enemi(screen,b1enemi11,b1enemi12,b1enemi13,b1enemi11p,b1enemi12p,b1enemi13p,x,&xe5,&ye5,&nnn5,&ce5,&mm5,150,-5320,-6570);

animation_cristal(scratch_cristal,&co105,xx,yy,screen,cristal1,cristal2,cristal3,cristal4,cristal5,x,&mmm105,0,-300,300,400);
animation_cristal(scratch_cristal,&co106,xx,yy,screen,cristal1,cristal2,cristal3,cristal4,cristal5,x,&mmm106,-2500,-3300,400,800);

if(ccys==0){cys++;}if(cys==450){ccys=1;}if(ccys==1){cys--;}if(cys==400){ccys=0;}
animation_sword(scratch_sword,&co107,xx,yy,screen,sword,x,-6900,-7200,cys,800);











if((co105==1)&&(c==6)&&(t<30)){Mix_PlayChannel(-1,scratch_flash,0);t++;v=4;if(n==1){if(xx==300){x-=4+v;}else{xx+=4;}afficher_load(speed1,screen,xx-60,yy+40);}if(n==2){if(xx==500){x+=4+v;}else{xx-=4;}afficher_load(speed2,screen,xx-30,yy+40);}}

if((co106==1)&&(c==6)&&(tt<30)){Mix_PlayChannel(-1,scratch_flash,0);tt++;v=4;if(n==1){if(xx==300){x-=4+v;}else{xx+=4;}afficher_load(speed1,screen,xx-60,yy+40);}if(n==2){if(xx==500){x+=4+v;}else{xx-=4;}afficher_load(speed2,screen,xx-30,yy+40);}}


if((co105!=1)&&(co106!=1)){afficher_load(score_speed0,screen,70,240);afficher_load(score_speed0,screen,90,240);}
if((co105==1)&&(co106!=1))
{

if(((30-t)/10)==0){afficher_load(score_speed0,screen,70,240);}
if(((30-t)/10)==1){afficher_load(score_speed1,screen,70,240);}
if(((30-t)/10)==2){afficher_load(score_speed2,screen,70,240);}
if(((30-t)/10)==3){afficher_load(score_speed3,screen,70,240);}
if(((30-t)/10)==4){afficher_load(score_speed4,screen,70,240);}
if(((30-t)/10)==5){afficher_load(score_speed5,screen,70,240);}
if(((30-t)/10)==6){afficher_load(score_speed6,screen,70,240);}
if(((30-t)/10)==7){afficher_load(score_speed7,screen,70,240);}
if(((30-t)/10)==8){afficher_load(score_speed8,screen,70,240);}
if(((30-t)/10)==9){afficher_load(score_speed9,screen,70,240);}
if(((30-t)%10)==0){afficher_load(score_speed0,screen,90,240);}
if(((30-t)%10)==1){afficher_load(score_speed1,screen,90,240);}
if(((30-t)%10)==2){afficher_load(score_speed2,screen,90,240);}
if(((30-t)%10)==3){afficher_load(score_speed3,screen,90,240);}
if(((30-t)%10)==4){afficher_load(score_speed4,screen,90,240);}
if(((30-t)%10)==5){afficher_load(score_speed5,screen,90,240);}
if(((30-t)%10)==6){afficher_load(score_speed6,screen,90,240);}
if(((30-t)%10)==7){afficher_load(score_speed7,screen,90,240);}
if(((30-t)%10)==8){afficher_load(score_speed8,screen,90,240);}
if(((30-t)%10)==9){afficher_load(score_speed9,screen,90,240);}



}
if((co105!=1)&&(co106==1))
{

if(((30-tt)/10)==0){afficher_load(score_speed0,screen,70,240);}
if(((30-tt)/10)==1){afficher_load(score_speed1,screen,70,240);}
if(((30-tt)/10)==2){afficher_load(score_speed2,screen,70,240);}
if(((30-tt)/10)==3){afficher_load(score_speed3,screen,70,240);}
if(((30-tt)/10)==4){afficher_load(score_speed4,screen,70,240);}
if(((30-tt)/10)==5){afficher_load(score_speed5,screen,70,240);}
if(((30-tt)/10)==6){afficher_load(score_speed6,screen,70,240);}
if(((30-tt)/10)==7){afficher_load(score_speed7,screen,70,240);}
if(((30-tt)/10)==8){afficher_load(score_speed8,screen,70,240);}
if(((30-tt)/10)==9){afficher_load(score_speed9,screen,70,240);}
if(((30-tt)%10)==0){afficher_load(score_speed0,screen,90,240);}
if(((30-tt)%10)==1){afficher_load(score_speed1,screen,90,240);}
if(((30-tt)%10)==2){afficher_load(score_speed2,screen,90,240);}
if(((30-tt)%10)==3){afficher_load(score_speed3,screen,90,240);}
if(((30-tt)%10)==4){afficher_load(score_speed4,screen,90,240);}
if(((30-tt)%10)==5){afficher_load(score_speed5,screen,90,240);}
if(((30-tt)%10)==6){afficher_load(score_speed6,screen,90,240);}
if(((30-tt)%10)==7){afficher_load(score_speed7,screen,90,240);}
if(((30-tt)%10)==8){afficher_load(score_speed8,screen,90,240);}
if(((30-tt)%10)==9){afficher_load(score_speed9,screen,90,240);}
}

if((co105==1)&&(co106==1))
{

if((((30-t)+(30-tt))/10)==0){afficher_load(score_speed0,screen,70,240);}
if((((30-t)+(30-tt))/10)==1){afficher_load(score_speed1,screen,70,240);}
if((((30-t)+(30-tt))/10)==2){afficher_load(score_speed2,screen,70,240);}
if((((30-t)+(30-tt))/10)==3){afficher_load(score_speed3,screen,70,240);}
if((((30-t)+(30-tt))/10)==4){afficher_load(score_speed4,screen,70,240);}
if((((30-t)+(30-tt))/10)==5){afficher_load(score_speed5,screen,70,240);}
if((((30-t)+(30-tt))/10)==6){afficher_load(score_speed6,screen,70,240);}
if((((30-t)+(30-tt))/10)==7){afficher_load(score_speed7,screen,70,240);}
if((((30-t)+(30-tt))/10)==8){afficher_load(score_speed8,screen,70,240);}
if((((30-t)+(30-tt))/10)==9){afficher_load(score_speed9,screen,70,240);}
if((((30-t)+(30-tt))%10)==0){afficher_load(score_speed0,screen,90,240);}
if((((30-t)+(30-tt))%10)==1){afficher_load(score_speed1,screen,90,240);}
if((((30-t)+(30-tt))%10)==2){afficher_load(score_speed2,screen,90,240);}
if((((30-t)+(30-tt))%10)==3){afficher_load(score_speed3,screen,90,240);}
if((((30-t)+(30-tt))%10)==4){afficher_load(score_speed4,screen,90,240);}
if((((30-t)+(30-tt))%10)==5){afficher_load(score_speed5,screen,90,240);}
if((((30-t)+(30-tt))%10)==6){afficher_load(score_speed6,screen,90,240);}
if((((30-t)+(30-tt))%10)==7){afficher_load(score_speed7,screen,90,240);}
if((((30-t)+(30-tt))%10)==8){afficher_load(score_speed8,screen,90,240);}
if((((30-t)+(30-tt))%10)==9){afficher_load(score_speed9,screen,90,240);}



}





if(mmmm==19){mmmm=1;}
if((mmmm==1)||(mmmm==2)||(mmmm==3)){afficher_load(key1,screen,20,160);}
if((mmmm==4)||(mmmm==5)||(mmmm==6)){afficher_load(key2,screen,20,160);}
if((mmmm==7)||(mmmm==8)||(mmmm==9)){afficher_load(key3,screen,20,160);}
if((mmmm==10)||(mmmm==11)||(mmmm==12)){afficher_load(key4,screen,20,160);}
if((mmmm==13)||(mmmm==14)||(mmmm==15)){afficher_load(key5,screen,20,160);}
if((mmmm==16)||(mmmm==17)||(mmmm==18)){afficher_load(key6,screen,20,160);}
mmmm++;

if(keys==0){afficher_load(num0,screen,50,140);}
if(keys==1){afficher_load(num1,screen,50,140);}
if(keys==2){afficher_load(num2,screen,50,140);}
if(keys==3){afficher_load(num3,screen,50,140);}

if((cristals==1)||(cristals==2)||(cristals==3)||(cristals==4)||(cristals==5)||(cristals==6)){afficher_load(cristal1,screen,20,230);}
if((cristals==7)||(cristals==8)||(cristals==9)||(cristals==10)||(cristals==11)||(cristals==12)){afficher_load(cristal2,screen,20,230);}
if((cristals==13)||(cristals==14)||(cristals==15)||(cristals==16)||(cristals==17)||(cristals==18)){afficher_load(cristal3,screen,20,230);}
if((cristals==19)||(cristals==20)||(cristals==21)||(cristals==22)||(cristals==23)||(cristals==24)){afficher_load(cristal4,screen,20,230);}
if((cristals==25)||(cristals==26)||(cristals==27)||(cristals==28)||(cristals==29)||(cristals==30)){afficher_load(cristal5,screen,20,230);}

(cristals)++;if(cristals==31){cristals=1;}




if(score==100){afficher_load(num1,screen,340,0);afficher_load(num0,screen,380,0);afficher_load(num0,screen,420,0);}
else
{

if((score/10)==0){afficher_load(num0,screen,380,0);}
if((score/10)==1){afficher_load(num1,screen,380,0);}
if((score/10)==2){afficher_load(num2,screen,380,0);}
if((score/10)==3){afficher_load(num3,screen,380,0);}
if((score/10)==4){afficher_load(num4,screen,380,0);}
if((score/10)==5){afficher_load(num5,screen,380,0);}
if((score/10)==6){afficher_load(num6,screen,380,0);}
if((score/10)==7){afficher_load(num7,screen,380,0);}
if((score/10)==8){afficher_load(num8,screen,380,0);}
if((score/10)==9){afficher_load(num9,screen,380,0);}
if((score%10)==0){afficher_load(num0,screen,420,0);}
if((score%10)==1){afficher_load(num1,screen,420,0);}
if((score%10)==2){afficher_load(num2,screen,420,0);}
if((score%10)==3){afficher_load(num3,screen,420,0);}
if((score%10)==4){afficher_load(num4,screen,420,0);}
if((score%10)==5){afficher_load(num5,screen,420,0);}
if((score%10)==6){afficher_load(num6,screen,420,0);}
if((score%10)==7){afficher_load(num7,screen,420,0);}
if((score%10)==8){afficher_load(num8,screen,420,0);}
if((score%10)==9){afficher_load(num9,screen,420,0);}

}



mi++;if(mi==60){min--;mi=0;}
if(min==-1){minu--;min=59;}

if((min/10)==0){afficher_load(minute0,screen,60,70);}
if((min/10)==1){afficher_load(minute1,screen,60,70);}
if((min/10)==2){afficher_load(minute2,screen,60,70);}
if((min/10)==3){afficher_load(minute3,screen,60,70);}
if((min/10)==4){afficher_load(minute4,screen,60,70);}
if((min/10)==5){afficher_load(minute5,screen,60,70);}
if((min/10)==6){afficher_load(minute6,screen,60,70);}
if((min/10)==7){afficher_load(minute7,screen,60,70);}
if((min/10)==8){afficher_load(minute8,screen,60,70);}
if((min/10)==9){afficher_load(minute9,screen,60,70);}
if((min%10)==0){afficher_load(minute0,screen,100,70);}
if((min%10)==1){afficher_load(minute1,screen,100,70);}
if((min%10)==2){afficher_load(minute2,screen,100,70);}
if((min%10)==3){afficher_load(minute3,screen,100,70);}
if((min%10)==4){afficher_load(minute4,screen,100,70);}
if((min%10)==5){afficher_load(minute5,screen,100,70);}
if((min%10)==6){afficher_load(minute6,screen,100,70);}
if((min%10)==7){afficher_load(minute7,screen,100,70);}
if((min%10)==8){afficher_load(minute8,screen,100,70);}
if((min%10)==9){afficher_load(minute9,screen,100,70);}
if(minu==0){afficher_load(minute0,screen,0,70);}
if(minu==1){afficher_load(minute1,screen,0,70);}
if(minu==2){afficher_load(minute2,screen,0,70);}
afficher_load(points,screen,30,70);


if((minu==0)&&(min==0)){conn=0;}

}




if(e==0){Mix_ResumeMusic();afficher_load(game_pause,screen,750,0);}
if(e==1)
{
Mix_PauseMusic();afficher_load(game_arr,screen,300,100);afficher_load(game_home,screen,325,125);afficher_load(game_play,screen,425,125);

if(pos_press_souris(event,325,375,125,175)==1){(*coon)=0;con=0;}





}

score=co1+co2+co3+co4+co5+co6+co7+co8+co9+co10+co11+co12+co13+co14+co15+co16+co17+co18+co19+co20+co21+co22+co23+co24+co25+co26+co27+co28+co29+co30+co31+co32+co33+co34+co35+co36+co37+co38+co39+co40+co41+co42+co43+co44+co45+co46+co47+co48+co49+co50+co51+co52+co53+co54+co55+co56+co57+co58+co59+co60+co61+co62+co63+co64+co65+co66+co67+co68+co69+co70+co71+co72+co73+co74+co75+co76+co77+co78+co79+co80+co81+co82+co83+co84+co85+co86+co87+co88+co89+co90+co91+co92+co93+co94+co95+co96+co97+co98+co99+co100;

keys=3-(co101+co102+co103+co104);


if(conn==0)
{Mix_HaltMusic();
keys=co101+co102+co103+co104;
ee=1;
if(sc1==1){Mix_PlayChannel(-1,scratch_fail,0);}sc1=0;
afficher_load(arr_plan,screen,200,0);
if(score==100)
{
afficher_load(num1,screen,330,100);afficher_load(num0,screen,370,100);afficher_load(num0,screen,410,100);
}
else
{

if((score/10)==0){afficher_load(num0,screen,370,100);}
if((score/10)==1){afficher_load(num1,screen,370,100);}
if((score/10)==2){afficher_load(num2,screen,370,100);}
if((score/10)==3){afficher_load(num3,screen,370,100);}
if((score/10)==4){afficher_load(num4,screen,370,100);}
if((score/10)==5){afficher_load(num5,screen,370,100);}
if((score/10)==6){afficher_load(num6,screen,370,100);}
if((score/10)==7){afficher_load(num7,screen,370,100);}
if((score/10)==8){afficher_load(num8,screen,370,100);}
if((score/10)==9){afficher_load(num9,screen,370,100);}
if((score%10)==0){afficher_load(num0,screen,410,100);}
if((score%10)==1){afficher_load(num1,screen,410,100);}
if((score%10)==2){afficher_load(num2,screen,410,100);}
if((score%10)==3){afficher_load(num3,screen,410,100);}
if((score%10)==4){afficher_load(num4,screen,410,100);}
if((score%10)==5){afficher_load(num5,screen,410,100);}
if((score%10)==6){afficher_load(num6,screen,410,100);}
if((score%10)==7){afficher_load(num7,screen,410,100);}
if((score%10)==8){afficher_load(num8,screen,410,100);}
if((score%10)==9){afficher_load(num9,screen,410,100);}
}


if(keys==0){afficher_load(num0,screen,410,200);}
if(keys==1){afficher_load(num1,screen,410,200);}
if(keys==2){afficher_load(num2,screen,410,200);}
if(keys==3){afficher_load(num3,screen,410,200);}


afficher_load(key1,screen,370,200);
if(pos_souris_rect(po,370,420,500,550)==1)
{if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
afficher_load(game_over,screen,250,300);
afficher_load(score_level,screen,310,30);
if(pos_press_souris(event,360,430,490,560)==1){Mix_PlayMusic(musique, -1);(*coon)=0;con=0;}

}





if((keys==0)&&(x==-7200)&&(xx>=740)&&(co107==1)){conn=2;}

if(conn==2)
{Mix_HaltMusic();
ee=1;(*n1)=0;if(sc1==1){Mix_PlayChannel(-1,scratch_victory,0);}sc1=0;
afficher_load(arr_plan,screen,200,0);
if(score==100){afficher_load(num1,screen,330,100);afficher_load(num0,screen,370,100);afficher_load(num0,screen,410,100);}
else
{

if((score/10)==0){afficher_load(num0,screen,370,120);}
if((score/10)==1){afficher_load(num1,screen,370,120);}
if((score/10)==2){afficher_load(num2,screen,370,120);}
if((score/10)==3){afficher_load(num3,screen,370,120);}
if((score/10)==4){afficher_load(num4,screen,370,120);}
if((score/10)==5){afficher_load(num5,screen,370,120);}
if((score/10)==6){afficher_load(num6,screen,370,120);}
if((score/10)==7){afficher_load(num7,screen,370,120);}
if((score/10)==8){afficher_load(num8,screen,370,120);}
if((score/10)==9){afficher_load(num9,screen,370,120);}
if((score%10)==0){afficher_load(num0,screen,410,120);}
if((score%10)==1){afficher_load(num1,screen,410,120);}
if((score%10)==2){afficher_load(num2,screen,410,120);}
if((score%10)==3){afficher_load(num3,screen,410,120);}
if((score%10)==4){afficher_load(num4,screen,410,120);}
if((score%10)==5){afficher_load(num5,screen,410,120);}
if((score%10)==6){afficher_load(num6,screen,410,120);}
if((score%10)==7){afficher_load(num7,screen,410,120);}
if((score%10)==8){afficher_load(num8,screen,410,120);}
if((score%10)==9){afficher_load(num9,screen,410,120);}
}
afficher_load(win,screen,250,220);
afficher_load(score_level,screen,310,30);

afficher_load(etoile,screen,270,360);
afficher_load(etoile,screen,360,340);
afficher_load(etoile,screen,450,360);




if(score<20){*et=0;}
if((score>=20)&&(score<50)){*et=1;}
if((score>=50)&&((score/3)<80)){*et=2;}
if(score>=80){*et=3;}


if(*et==0)
{
if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;}
}
if(*et==1)
{connn++;if(connn==121){connn=120;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn==120){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;} }   }

if(*et==2)
{connn++;if(connn==201){connn=200;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn>=120){if(sc3==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc3=0;afficher_load(etoile1,screen,360,340); }if(connn==200){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{sc5=1;afficher_load(home,screen,370,500);}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{sc6=1;afficher_load(next_level,screen,470,500);} }   }

if(*et==3)
{connn++;if(connn==281){connn=280;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn>=120){if(sc3==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc3=0;afficher_load(etoile1,screen,360,340); }if(connn>=200){if(sc4==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc4=0;afficher_load(etoile1,screen,450,360); }if(connn==280){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{sc5=1;afficher_load(home,screen,370,500);}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;} }   }


if(pos_press_souris(event,360,430,490,560)==1){Mix_PlayMusic(musique, -1);(*coon)=0;con=0;}
if(pos_press_souris(event,470,540,490,560)==1){Mix_PlayMusic(musique, -1);return;}



}







SDL_Delay (5);

SDL_Flip(screen);
}
}

/*------------level2------------*/

void level2(SDL_Surface* game_arr,SDL_Surface* game_home,Mix_Chunk* scratch_sword,SDL_Surface* sword,SDL_Surface* points,SDL_Surface* minute0,SDL_Surface* minute1,SDL_Surface* minute2,SDL_Surface* minute3,SDL_Surface* minute4,SDL_Surface* minute5,SDL_Surface* minute6,SDL_Surface* minute7,SDL_Surface* minute8,SDL_Surface* minute9,Mix_Chunk* scratch_flash,Mix_Chunk* scratch_cristal,SDL_Surface* speed2,SDL_Surface* score_speed0,SDL_Surface* score_speed1,SDL_Surface* score_speed2,SDL_Surface* score_speed3,SDL_Surface* score_speed4,SDL_Surface* score_speed5,SDL_Surface* score_speed6,SDL_Surface* score_speed7,SDL_Surface* score_speed8,SDL_Surface* score_speed9,SDL_Surface* speed1,SDL_Surface* cristal1,SDL_Surface* cristal2,SDL_Surface* cristal3,SDL_Surface* cristal4,SDL_Surface* cristal5,int *et,Mix_Music *musique,Mix_Music *ice,Mix_Chunk* scratch,Mix_Chunk* scratch_hit,Mix_Chunk* scratch_jump,Mix_Chunk* scratch_coin,Mix_Chunk* scratch_key,Mix_Chunk* scratch_etoile,Mix_Chunk* scratch_victory,Mix_Chunk* scratch_fail,int *coon,int *n2,SDL_Surface* win,SDL_Surface* etoile,SDL_Surface* etoile1,SDL_Surface* next_level,SDL_Surface* next_level1,SDL_Surface* home1,SDL_Surface* score_level,SDL_Surface* game_over,SDL_Surface* home,SDL_Surface* arr_plan,SDL_Surface* key1,SDL_Surface* key2,SDL_Surface* key3,SDL_Surface* key4,SDL_Surface* key5,SDL_Surface* key6,SDL_Surface* num0,SDL_Surface* num1,SDL_Surface* num2,SDL_Surface* num3,SDL_Surface* num4,SDL_Surface* num5,SDL_Surface* num6,SDL_Surface* num7,SDL_Surface* num8,SDL_Surface* num9,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,SDL_Surface* game_play,SDL_Surface* game_pause,SDL_Surface* heart,SDL_Surface* screen,SDL_Surface* background2,SDL_Surface* background22,SDL_Surface* perso,SDL_Surface* perso1,SDL_Surface* perso2,SDL_Surface* perso3,SDL_Surface* persop,SDL_Surface* perso1p,SDL_Surface* perso2p,SDL_Surface* perso3p,SDL_Surface* b2enemi11,SDL_Surface* b2enemi12,SDL_Surface* b2enemi13,SDL_Surface* b2enemi11p,SDL_Surface* b2enemi12p,SDL_Surface* b2enemi13p,SDL_Surface* b2enemi21,SDL_Surface* b2enemi22,SDL_Surface* b2enemi23,SDL_Surface* b2enemi21p,SDL_Surface* b2enemi22p,SDL_Surface* b2enemi23p,int *continuer)
{
SDL_Event event; 
int co1=0,co2=0,co3=0,co4=0,co5=0,
co6=0,co7=0,co8=0,co9=0,co10=0,
co11=0,co12=0,co13=0,co14=0,co15=0,
co16=0,co17=0,co18=0,co19=0,co20=0,
co21=0,co22=0,co23=0,co24=0,co25=0,co26=0,co27=0,
co28=0,co29=0,co30=0,co31=0,co32=0,
co33=0,co34=0,co35=0,co36=0,co37=0,
co38=0,co39=0,co40=0,co41=0,co42=0,
co43=0,co44=0,co45=0,co46=0,co47=0,
co48=0,co49=0,co50=0,co51=0,co52=0,co53=0,co54=0,
co55=0,co56=0,co57=0,co58=0,co59=0,
co60=0,co61=0,co62=0,co63=0,co64=0,
co65=0,co66=0,co67=0,co68=0,co69=0,
co70=0,co71=0,co72=0,co73=0,co74=0,
co75=0,co76=0,co77=0,co78=0,co79=0,
co80=0,co81=0,co82=0,co83=0,co84=0,
co85=0,co86=0,co87=0,co88=0,co89=0,
co90=0,co91=0,co92=0,co93=0,co94=0,
co95=0,co96=0,co97=0,co98=0,co99=0,co100=0,
co101=0,co102=0,co103=0,co104=0,co105=0,co106=0,co107=0,
score=0;
int xe1=800,ye1=385,xe2=800,ye2=385,xe3=800,ye3=240,xe4=800,ye4=360,xe5=800,ye5=250;
int mmm1=1,mmm2=1,mmm3=1,mmm4=1,mmm5=1,mmm6=1,mmm7=1,mmm8=1,mmm9=1,mmm10=1,mmm11=1,mmm12=1,mmm13=1,mmm14=1,mmm15=1,mmm16=1,mmm17=1,mmm18=1,mmm19=1,mmm20=1,
mmm21=1,mmm22=1,mmm23=1,mmm24=1,mmm25=1,mmm26=1,mmm27=1,mmm28=1,mmm29=1,mmm30=1,mmm31=1,mmm32=1,mmm33=1,mmm34=1,mmm35=1,mmm36=1,mmm37=1,mmm38=1,mmm39=1,mmm40=1,
mmm41=1,mmm42=1,mmm43=1,mmm44=1,mmm45=1,mmm46=1,mmm47=1,mmm48=1,mmm49=1,mmm50=1,mmm51=1,mmm52=1,mmm53=1,mmm54=1,
mmm55=1,mmm56=1,mmm57=1,mmm58=1,mmm59=1,mmm60=1,mmm61=1,mmm62=1,mmm63=1,mmm64=1,mmm65=1,mmm66=1,mmm67=1,mmm68=1,mmm69=1,
mmm70=1,mmm71=1,mmm72=1,mmm73=1,mmm74=1,mmm75=1,mmm76=1,mmm77=1,mmm78=1,mmm79=1,mmm80=1,mmm81=1,mmm82=1,mmm83=1,mmm84=1,
mmm85=1,mmm86=1,mmm87=1,mmm88=1,mmm89=1,mmm90=1,mmm91=1,mmm92=1,mmm93=1,mmm94=1,mmm95=1,mmm96=1,mmm97=1,mmm98=1,mmm99=1,mmm100=1,
mmm101=1,mmm102=1,mmm103=1,mmm104=1,mmm105=1,mmm106=1;
int cys=210,ccys=0,minu=2,min=59,mi=0,cristals=1,v=0,t=0,tt=0,mo=0,sc6=1,sc5=1,sc1=1,sc2=1,sc3=1,sc4=1,connn=0,conn=1,mmmm=1,keys=3,e=0,ee=0,dd=0,d=6,con=1,c=-1,x=0,xx=0,y=0,yy=360,k=0,kk=0,kkk=0,a=1,aa=5,b=0,n=1,o=0,m=1,mm1=1,mm2=1,mm3=1,mm4=1,mm5=1,s=0,nn=0,j=0,ce1=0,ce2=0,ce3=0,ce4=0,ce5=0,nnn1=0,nnn2=0,nnn3=0,nnn4=0,nnn5=0,nnnn=0,vie=3;
Uint8 *keystates=SDL_GetKeyState(NULL);
SDL_Rect po;
Mix_PlayMusic(ice, -1);

while((con!=0)&&(*continuer!=0))
{
k=0;kk=0;mo=0;
SDL_PollEvent(&event);

*continuer=gestion_clavier(event);
c=gestion_clavier(event);
po=gestion_souris(event);
if((e==0)&&(pos_press_souris(event,750,800,0,50)==1)){e=1;SDL_Delay(150); }
if((e==1)&&(pos_press_souris(event,425,475,125,175)==1)){e=0;SDL_Delay(150); }
if((e==0)&&(ee==0))
{
/*-----move-----*/
if(c==3){move_right(&x,&xx,&n,&nnnn);k=1;m++; }
if(c==4){move_left(&x,&xx,&n,&nnnn);k=1;m--; } 

if(pos_press_souris(event,xx,800,0,600)==1){move_right(&x,&xx,&n,&nnnn);k=1;m++;}
if(pos_press_souris(event,0,xx,0,600)==1){move_left(&x,&xx,&n,&nnnn);k=1;m--;}

if(k==0){move_keystate(keystates,&x,&xx,&n,&nnnn,&m,&mo);}
if((k==0)&&(c==-1)&&(mo==0)){m=0;afficher_load(perso1,screen,xx,yy);}

if((c==1)||((event.button.button==SDL_BUTTON_RIGHT)&&(event.type==SDL_MOUSEBUTTONDOWN))){jump_up(scratch_jump,&a,&o,&yy,&kk,&kkk);m=3;}
if(nnnn==1){ xx+=4;x+=4;  if( (xx==500) ){nnnn=0;} }
if(nnnn==2){ xx-=4;x-=4;  if( (xx==300) ){nnnn=0;} }
if(x<-7200){x=-7200;}
/*--------------*/


collision_background(background22,&xx,&yy,&s,&x,&kk,&kkk,&a,&o,&m,&nnnn);
if(kk==0){jump_down(&a,&o,&yy,&kkk,&m);}


if(nn==0){if(collision_ab(x,xx,yy,xe1,ye1)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe2,ye2)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe3,ye3)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe4,ye4)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe5,ye5)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(yy>=600){xe1=800;ye1=385;xe2=800;ye2=385;xe3=800;ye3=240;xe4=800;ye4=360;xe5=800;ye5=250;x=0; xx=0;yy=360;vie--;if(vie==0){conn=0;} }
if(nn==1){d--;if(d==0){d=10;dd++;}if(dd==10){dd=0;nn=0;} }

afficher_load(background2,screen,x,y);if(m==7){m=1;}if(m<=0){m=6;}
if((k==0)&&(c==-1)&&(mo==0)){m=0;}

if(d>5){animation_perso(screen,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,xx,yy,n,m); }



if(vie==3){afficher_load(heart,screen,0,0);afficher_load(heart,screen,50,0);afficher_load(heart,screen,100,0);}
if(vie==2){afficher_load(heart,screen,0,0);afficher_load(heart,screen,50,0);}
if(vie==1){afficher_load(heart,screen,0,0);}


animation_score(scratch_coin,&co1,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm1,-100,-900,250);
animation_score(scratch_coin,&co2,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm2,-120,-920,250);
animation_score(scratch_coin,&co3,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm3,-140,-940,250);
animation_score(scratch_coin,&co4,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm4,-160,-960,250);
animation_score(scratch_coin,&co5,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm5,-180,-980,250);

animation_score(scratch_coin,&co6,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm6,-300,-1100,250);
animation_score(scratch_coin,&co7,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm7,-320,-1120,250);
animation_score(scratch_coin,&co8,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm8,-340,-1140,250);
animation_score(scratch_coin,&co9,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm9,-360,-1160,250);
animation_score(scratch_coin,&co10,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm10,-380,-1180,250);

animation_score(scratch_coin,&co11,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm11,-700,-1500,250);
animation_score(scratch_coin,&co12,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm12,-720,-1520,220);
animation_score(scratch_coin,&co13,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm13,-740,-1540,200);
animation_score(scratch_coin,&co14,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm14,-760,-1560,220);
animation_score(scratch_coin,&co15,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm15,-780,-1580,250);

animation_score(scratch_coin,&co16,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm16,-1100,-1900,250);
animation_score(scratch_coin,&co17,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm17,-1120,-1920,220);
animation_score(scratch_coin,&co18,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm18,-1140,-1940,200);
animation_score(scratch_coin,&co19,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm19,-1160,-1960,220);
animation_score(scratch_coin,&co20,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm20,-1180,-1980,250);

animation_score(scratch_coin,&co70,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm70,-1820,-2620,340);
animation_score(scratch_coin,&co71,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm71,-1800,-2600,340);

animation_score(scratch_coin,&co72,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm72,-2210,-3010,340);
animation_score(scratch_coin,&co73,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm73,-2190,-2990,340);

animation_score(scratch_coin,&co74,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm74,-1880,-2680,230);
animation_score(scratch_coin,&co75,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm75,-1900,-2700,230);
animation_score(scratch_coin,&co76,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm76,-1920,-2720,230);

animation_score(scratch_coin,&co77,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm77,-2090,-2890,230);
animation_score(scratch_coin,&co78,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm78,-2110,-2910,230);
animation_score(scratch_coin,&co79,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm79,-2130,-2930,230);

animation_score(scratch_coin,&co80,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm80,-1970,-2770,300);
animation_score(scratch_coin,&co81,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm81,-1990,-2790,300);
animation_score(scratch_coin,&co82,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm82,-2010,-2810,300);
animation_score(scratch_coin,&co83,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm83,-2030,-2830,300);
animation_score(scratch_coin,&co84,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm84,-2050,-2850,300);

animation_score(scratch_coin,&co21,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm21,-2740,-3540,150);
animation_score(scratch_coin,&co22,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm22,-2760,-3560,120);
animation_score(scratch_coin,&co23,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm23,-2780,-3580,100);
animation_score(scratch_coin,&co24,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm24,-2800,-3600,120);
animation_score(scratch_coin,&co25,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm25,-2820,-3620,150);
animation_score(scratch_coin,&co26,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm26,-2720,-3520,180);
animation_score(scratch_coin,&co27,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm27,-2840,-3640,180);

animation_score(scratch_coin,&co28,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm28,-4000,-4800,250);
animation_score(scratch_coin,&co29,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm29,-4020,-4820,220);
animation_score(scratch_coin,&co30,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm30,-4040,-4840,200);
animation_score(scratch_coin,&co31,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm31,-4060,-4860,220);
animation_score(scratch_coin,&co32,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm32,-4080,-4880,250);

animation_score(scratch_coin,&co33,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm33,-4200,-5000,370);
animation_score(scratch_coin,&co34,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm34,-4220,-5020,370);
animation_score(scratch_coin,&co35,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm35,-4240,-5040,370);
animation_score(scratch_coin,&co36,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm36,-4260,-5060,370);
animation_score(scratch_coin,&co37,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm37,-4280,-5080,370);

animation_score(scratch_coin,&co38,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm38,-4400,-5200,250);
animation_score(scratch_coin,&co39,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm39,-4420,-5220,220);
animation_score(scratch_coin,&co40,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm40,-4440,-5240,200);
animation_score(scratch_coin,&co41,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm41,-4460,-5260,220);
animation_score(scratch_coin,&co42,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm42,-4480,-5280,250);

animation_score(scratch_coin,&co85,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm85,-4910,-5710,350);
animation_score(scratch_coin,&co86,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm86,-4830,-5630,350);
animation_score(scratch_coin,&co87,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm87,-4850,-5650,350);
animation_score(scratch_coin,&co88,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm88,-4870,-5670,350);
animation_score(scratch_coin,&co89,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm89,-4890,-5690,350);

animation_score(scratch_coin,&co90,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm90,-5110,-5810,350);
animation_score(scratch_coin,&co91,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm91,-5030,-5830,350);
animation_score(scratch_coin,&co92,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm92,-5050,-5850,350);
animation_score(scratch_coin,&co93,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm93,-5070,-5870,350);
animation_score(scratch_coin,&co94,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm94,-5090,-5890,350);


animation_score(scratch_coin,&co95,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm95,-4960,-5760,350);
animation_score(scratch_coin,&co96,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm96,-4960,-5760,330);
animation_score(scratch_coin,&co97,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm97,-4960,-5760,310);
animation_score(scratch_coin,&co98,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm98,-4980,-5780,350);
animation_score(scratch_coin,&co99,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm99,-4980,-5780,330);
animation_score(scratch_coin,&co100,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm100,-4980,-5780,310);

animation_score(scratch_coin,&co43,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm43,-5350,-6150,120);
animation_score(scratch_coin,&co44,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm44,-5370,-6170,120);
animation_score(scratch_coin,&co45,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm45,-5390,-6190,120);
animation_score(scratch_coin,&co46,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm46,-5410,-6210,120);
animation_score(scratch_coin,&co47,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm47,-5430,-6230,120);

animation_score(scratch_coin,&co48,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm48,-5600,-6400,220);
animation_score(scratch_coin,&co49,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm49,-5620,-6420,200);
animation_score(scratch_coin,&co50,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm50,-5640,-6440,220);
animation_score(scratch_coin,&co51,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm51,-5660,-6460,240);
animation_score(scratch_coin,&co52,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm52,-5680,-6480,260);
animation_score(scratch_coin,&co53,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm53,-5700,-6500,280);
animation_score(scratch_coin,&co54,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm54,-5720,-6520,300);

animation_score(scratch_coin,&co55,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm55,-5850,-6650,220);
animation_score(scratch_coin,&co56,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm56,-5870,-6670,220);
animation_score(scratch_coin,&co57,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm57,-5890,-6690,220);
animation_score(scratch_coin,&co58,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm58,-5910,-6710,220);
animation_score(scratch_coin,&co59,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm59,-5930,-6730,220);

animation_score(scratch_coin,&co60,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm60,-6050,-6850,260);
animation_score(scratch_coin,&co61,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm61,-6070,-6870,260);
animation_score(scratch_coin,&co62,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm62,-6090,-6890,260);
animation_score(scratch_coin,&co63,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm63,-6110,-6910,260);
animation_score(scratch_coin,&co64,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm64,-6130,-6930,260);

animation_score(scratch_coin,&co65,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm65,-6450,-7250,250);
animation_score(scratch_coin,&co66,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm66,-6470,-7270,220);
animation_score(scratch_coin,&co67,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm67,-6490,-7290,200);
animation_score(scratch_coin,&co68,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm68,-6510,-7310,220);
animation_score(scratch_coin,&co69,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm69,-6530,-7330,250);


animation_score(scratch_key,&co102,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm102,-1400,-2200,200);
animation_score(scratch_key,&co103,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm103,-5700,-6500,240);
animation_score(scratch_key,&co104,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm104,-2580,-3380,250);

animation_enemi(screen,b2enemi11,b2enemi12,b2enemi13,b2enemi11p,b2enemi12p,b2enemi13p,x,&xe1,&ye1,&nnn1,&ce1,&mm1,80,-400,-1280);
animation_enemi(screen,b2enemi11,b2enemi12,b2enemi13,b2enemi11p,b2enemi12p,b2enemi13p,x,&xe2,&ye2,&nnn2,&ce2,&mm2,150,-1280,-2300);
animation_enemi(screen,b2enemi21,b2enemi22,b2enemi23,b2enemi21p,b2enemi22p,b2enemi23p,x,&xe3,&ye3,&nnn3,&ce3,&mm3,180,-2500,-3600);
animation_enemi(screen,b2enemi21,b2enemi22,b2enemi23,b2enemi21p,b2enemi22p,b2enemi23p,x,&xe4,&ye4,&nnn4,&ce4,&mm4,300,-3600,-4700);
animation_enemi(screen,b2enemi11,b2enemi12,b2enemi13,b2enemi11p,b2enemi12p,b2enemi13p,x,&xe5,&ye5,&nnn5,&ce5,&mm5,150,-5570,-6820);


animation_cristal(scratch_cristal,&co105,xx,yy,screen,cristal1,cristal2,cristal3,cristal4,cristal5,x,&mmm105,0,-800,250,400);
animation_cristal(scratch_cristal,&co106,xx,yy,screen,cristal1,cristal2,cristal3,cristal4,cristal5,x,&mmm106,-3500,-4300,250,800);


if(ccys==0){cys++;}if(cys==260){ccys=1;}if(ccys==1){cys--;}if(cys==210){ccys=0;}
animation_sword(scratch_sword,&co107,xx,yy,screen,sword,x,-6650,-7200,cys,800);













if((co105==1)&&(c==6)&&(t<30)){Mix_PlayChannel(-1,scratch_flash,0);t++;v=4;if(n==1){if(xx==300){x-=4+v;}else{xx+=4;}afficher_load(speed1,screen,xx-60,yy+40);}if(n==2){if(xx==500){x+=4+v;}else{xx-=4;}afficher_load(speed2,screen,xx-30,yy+40);}}

if((co106==1)&&(c==6)&&(tt<30)){Mix_PlayChannel(-1,scratch_flash,0);tt++;v=4;if(n==1){if(xx==300){x-=4+v;}else{xx+=4;}afficher_load(speed1,screen,xx-60,yy+40);}if(n==2){if(xx==500){x+=4+v;}else{xx-=4;}afficher_load(speed2,screen,xx-30,yy+40);}}


if((co105!=1)&&(co106!=1)){afficher_load(score_speed0,screen,70,240);afficher_load(score_speed0,screen,90,240);}
if((co105==1)&&(co106!=1))
{

if(((30-t)/10)==0){afficher_load(score_speed0,screen,70,240);}
if(((30-t)/10)==1){afficher_load(score_speed1,screen,70,240);}
if(((30-t)/10)==2){afficher_load(score_speed2,screen,70,240);}
if(((30-t)/10)==3){afficher_load(score_speed3,screen,70,240);}
if(((30-t)/10)==4){afficher_load(score_speed4,screen,70,240);}
if(((30-t)/10)==5){afficher_load(score_speed5,screen,70,240);}
if(((30-t)/10)==6){afficher_load(score_speed6,screen,70,240);}
if(((30-t)/10)==7){afficher_load(score_speed7,screen,70,240);}
if(((30-t)/10)==8){afficher_load(score_speed8,screen,70,240);}
if(((30-t)/10)==9){afficher_load(score_speed9,screen,70,240);}
if(((30-t)%10)==0){afficher_load(score_speed0,screen,90,240);}
if(((30-t)%10)==1){afficher_load(score_speed1,screen,90,240);}
if(((30-t)%10)==2){afficher_load(score_speed2,screen,90,240);}
if(((30-t)%10)==3){afficher_load(score_speed3,screen,90,240);}
if(((30-t)%10)==4){afficher_load(score_speed4,screen,90,240);}
if(((30-t)%10)==5){afficher_load(score_speed5,screen,90,240);}
if(((30-t)%10)==6){afficher_load(score_speed6,screen,90,240);}
if(((30-t)%10)==7){afficher_load(score_speed7,screen,90,240);}
if(((30-t)%10)==8){afficher_load(score_speed8,screen,90,240);}
if(((30-t)%10)==9){afficher_load(score_speed9,screen,90,240);}



}
if((co105!=1)&&(co106==1))
{

if(((30-tt)/10)==0){afficher_load(score_speed0,screen,70,240);}
if(((30-tt)/10)==1){afficher_load(score_speed1,screen,70,240);}
if(((30-tt)/10)==2){afficher_load(score_speed2,screen,70,240);}
if(((30-tt)/10)==3){afficher_load(score_speed3,screen,70,240);}
if(((30-tt)/10)==4){afficher_load(score_speed4,screen,70,240);}
if(((30-tt)/10)==5){afficher_load(score_speed5,screen,70,240);}
if(((30-tt)/10)==6){afficher_load(score_speed6,screen,70,240);}
if(((30-tt)/10)==7){afficher_load(score_speed7,screen,70,240);}
if(((30-tt)/10)==8){afficher_load(score_speed8,screen,70,240);}
if(((30-tt)/10)==9){afficher_load(score_speed9,screen,70,240);}
if(((30-tt)%10)==0){afficher_load(score_speed0,screen,90,240);}
if(((30-tt)%10)==1){afficher_load(score_speed1,screen,90,240);}
if(((30-tt)%10)==2){afficher_load(score_speed2,screen,90,240);}
if(((30-tt)%10)==3){afficher_load(score_speed3,screen,90,240);}
if(((30-tt)%10)==4){afficher_load(score_speed4,screen,90,240);}
if(((30-tt)%10)==5){afficher_load(score_speed5,screen,90,240);}
if(((30-tt)%10)==6){afficher_load(score_speed6,screen,90,240);}
if(((30-tt)%10)==7){afficher_load(score_speed7,screen,90,240);}
if(((30-tt)%10)==8){afficher_load(score_speed8,screen,90,240);}
if(((30-tt)%10)==9){afficher_load(score_speed9,screen,90,240);}
}

if((co105==1)&&(co106==1))
{

if((((30-t)+(30-tt))/10)==0){afficher_load(score_speed0,screen,70,240);}
if((((30-t)+(30-tt))/10)==1){afficher_load(score_speed1,screen,70,240);}
if((((30-t)+(30-tt))/10)==2){afficher_load(score_speed2,screen,70,240);}
if((((30-t)+(30-tt))/10)==3){afficher_load(score_speed3,screen,70,240);}
if((((30-t)+(30-tt))/10)==4){afficher_load(score_speed4,screen,70,240);}
if((((30-t)+(30-tt))/10)==5){afficher_load(score_speed5,screen,70,240);}
if((((30-t)+(30-tt))/10)==6){afficher_load(score_speed6,screen,70,240);}
if((((30-t)+(30-tt))/10)==7){afficher_load(score_speed7,screen,70,240);}
if((((30-t)+(30-tt))/10)==8){afficher_load(score_speed8,screen,70,240);}
if((((30-t)+(30-tt))/10)==9){afficher_load(score_speed9,screen,70,240);}
if((((30-t)+(30-tt))%10)==0){afficher_load(score_speed0,screen,90,240);}
if((((30-t)+(30-tt))%10)==1){afficher_load(score_speed1,screen,90,240);}
if((((30-t)+(30-tt))%10)==2){afficher_load(score_speed2,screen,90,240);}
if((((30-t)+(30-tt))%10)==3){afficher_load(score_speed3,screen,90,240);}
if((((30-t)+(30-tt))%10)==4){afficher_load(score_speed4,screen,90,240);}
if((((30-t)+(30-tt))%10)==5){afficher_load(score_speed5,screen,90,240);}
if((((30-t)+(30-tt))%10)==6){afficher_load(score_speed6,screen,90,240);}
if((((30-t)+(30-tt))%10)==7){afficher_load(score_speed7,screen,90,240);}
if((((30-t)+(30-tt))%10)==8){afficher_load(score_speed8,screen,90,240);}
if((((30-t)+(30-tt))%10)==9){afficher_load(score_speed9,screen,90,240);}



}







if(mmmm==19){mmmm=1;}
if((mmmm==1)||(mmmm==2)||(mmmm==3)){afficher_load(key1,screen,20,160);}
if((mmmm==4)||(mmmm==5)||(mmmm==6)){afficher_load(key2,screen,20,160);}
if((mmmm==7)||(mmmm==8)||(mmmm==9)){afficher_load(key3,screen,20,160);}
if((mmmm==10)||(mmmm==11)||(mmmm==12)){afficher_load(key4,screen,20,160);}
if((mmmm==13)||(mmmm==14)||(mmmm==15)){afficher_load(key5,screen,20,160);}
if((mmmm==16)||(mmmm==17)||(mmmm==18)){afficher_load(key6,screen,20,160);}
mmmm++;

if(keys==0){afficher_load(num0,screen,50,140);}
if(keys==1){afficher_load(num1,screen,50,140);}
if(keys==2){afficher_load(num2,screen,50,140);}
if(keys==3){afficher_load(num3,screen,50,140);}


if((cristals==1)||(cristals==2)||(cristals==3)||(cristals==4)||(cristals==5)||(cristals==6)){afficher_load(cristal1,screen,20,230);}
if((cristals==7)||(cristals==8)||(cristals==9)||(cristals==10)||(cristals==11)||(cristals==12)){afficher_load(cristal2,screen,20,230);}
if((cristals==13)||(cristals==14)||(cristals==15)||(cristals==16)||(cristals==17)||(cristals==18)){afficher_load(cristal3,screen,20,230);}
if((cristals==19)||(cristals==20)||(cristals==21)||(cristals==22)||(cristals==23)||(cristals==24)){afficher_load(cristal4,screen,20,230);}
if((cristals==25)||(cristals==26)||(cristals==27)||(cristals==28)||(cristals==29)||(cristals==30)){afficher_load(cristal5,screen,20,230);}

(cristals)++;if(cristals==31){cristals=1;}

if(score==100){afficher_load(num1,screen,340,0);afficher_load(num0,screen,380,0);afficher_load(num0,screen,420,0);}
else
{

if((score/10)==0){afficher_load(num0,screen,380,0);}
if((score/10)==1){afficher_load(num1,screen,380,0);}
if((score/10)==2){afficher_load(num2,screen,380,0);}
if((score/10)==3){afficher_load(num3,screen,380,0);}
if((score/10)==4){afficher_load(num4,screen,380,0);}
if((score/10)==5){afficher_load(num5,screen,380,0);}
if((score/10)==6){afficher_load(num6,screen,380,0);}
if((score/10)==7){afficher_load(num7,screen,380,0);}
if((score/10)==8){afficher_load(num8,screen,380,0);}
if((score/10)==9){afficher_load(num9,screen,380,0);}
if((score%10)==0){afficher_load(num0,screen,420,0);}
if((score%10)==1){afficher_load(num1,screen,420,0);}
if((score%10)==2){afficher_load(num2,screen,420,0);}
if((score%10)==3){afficher_load(num3,screen,420,0);}
if((score%10)==4){afficher_load(num4,screen,420,0);}
if((score%10)==5){afficher_load(num5,screen,420,0);}
if((score%10)==6){afficher_load(num6,screen,420,0);}
if((score%10)==7){afficher_load(num7,screen,420,0);}
if((score%10)==8){afficher_load(num8,screen,420,0);}
if((score%10)==9){afficher_load(num9,screen,420,0);}

}




mi++;if(mi==60){min--;mi=0;}
if(min==-1){minu--;min=59;}

if((min/10)==0){afficher_load(minute0,screen,60,70);}
if((min/10)==1){afficher_load(minute1,screen,60,70);}
if((min/10)==2){afficher_load(minute2,screen,60,70);}
if((min/10)==3){afficher_load(minute3,screen,60,70);}
if((min/10)==4){afficher_load(minute4,screen,60,70);}
if((min/10)==5){afficher_load(minute5,screen,60,70);}
if((min/10)==6){afficher_load(minute6,screen,60,70);}
if((min/10)==7){afficher_load(minute7,screen,60,70);}
if((min/10)==8){afficher_load(minute8,screen,60,70);}
if((min/10)==9){afficher_load(minute9,screen,60,70);}
if((min%10)==0){afficher_load(minute0,screen,100,70);}
if((min%10)==1){afficher_load(minute1,screen,100,70);}
if((min%10)==2){afficher_load(minute2,screen,100,70);}
if((min%10)==3){afficher_load(minute3,screen,100,70);}
if((min%10)==4){afficher_load(minute4,screen,100,70);}
if((min%10)==5){afficher_load(minute5,screen,100,70);}
if((min%10)==6){afficher_load(minute6,screen,100,70);}
if((min%10)==7){afficher_load(minute7,screen,100,70);}
if((min%10)==8){afficher_load(minute8,screen,100,70);}
if((min%10)==9){afficher_load(minute9,screen,100,70);}
if(minu==0){afficher_load(minute0,screen,0,70);}
if(minu==1){afficher_load(minute1,screen,0,70);}
if(minu==2){afficher_load(minute2,screen,0,70);}
afficher_load(points,screen,30,70);





if((minu==0)&&(min==0)){conn=0;}



}


if(e==0){Mix_ResumeMusic();afficher_load(game_pause,screen,750,0);}
if(e==1)
{
Mix_PauseMusic();afficher_load(game_arr,screen,300,100);afficher_load(game_home,screen,325,125);afficher_load(game_play,screen,425,125);

if(pos_press_souris(event,325,375,125,175)==1){(*coon)=0;con=0;}





}

score=co1+co2+co3+co4+co5+co6+co7+co8+co9+co10+co11+co12+co13+co14+co15+co16+co17+co18+co19+co20+co21+co22+co23+co24+co25+co26+co27+co28+co29+co30+co31+co32+co33+co34+co35+co36+co37+co38+co39+co40+co41+co42+co43+co44+co45+co46+co47+co48+co49+co50+co51+co52+co53+co54+co55+co56+co57+co58+co59+co60+co61+co62+co63+co64+co65+co66+co67+co68+co69+co70+co71+co72+co73+co74+co75+co76+co77+co78+co79+co80+co81+co82+co83+co84+co85+co86+co87+co88+co89+co90+co91+co92+co93+co94+co95+co96+co97+co98+co99+co100;

keys=3-(co101+co102+co103+co104);


if(conn==0)
{Mix_HaltMusic();
keys=co101+co102+co103+co104;
ee=1;if(sc1==1){Mix_PlayChannel(-1,scratch_fail,0);}sc1=0;
afficher_load(arr_plan,screen,200,0);
if(score==100){afficher_load(num1,screen,330,100);afficher_load(num0,screen,370,100);afficher_load(num0,screen,410,100);}
else
{

if((score/10)==0){afficher_load(num0,screen,370,100);}
if((score/10)==1){afficher_load(num1,screen,370,100);}
if((score/10)==2){afficher_load(num2,screen,370,100);}
if((score/10)==3){afficher_load(num3,screen,370,100);}
if((score/10)==4){afficher_load(num4,screen,370,100);}
if((score/10)==5){afficher_load(num5,screen,370,100);}
if((score/10)==6){afficher_load(num6,screen,370,100);}
if((score/10)==7){afficher_load(num7,screen,370,100);}
if((score/10)==8){afficher_load(num8,screen,370,100);}
if((score/10)==9){afficher_load(num9,screen,370,100);}
if((score%10)==0){afficher_load(num0,screen,410,100);}
if((score%10)==1){afficher_load(num1,screen,410,100);}
if((score%10)==2){afficher_load(num2,screen,410,100);}
if((score%10)==3){afficher_load(num3,screen,410,100);}
if((score%10)==4){afficher_load(num4,screen,410,100);}
if((score%10)==5){afficher_load(num5,screen,410,100);}
if((score%10)==6){afficher_load(num6,screen,410,100);}
if((score%10)==7){afficher_load(num7,screen,410,100);}
if((score%10)==8){afficher_load(num8,screen,410,100);}
if((score%10)==9){afficher_load(num9,screen,410,100);}
}


if(keys==0){afficher_load(num0,screen,410,200);}
if(keys==1){afficher_load(num1,screen,410,200);}
if(keys==2){afficher_load(num2,screen,410,200);}
if(keys==3){afficher_load(num3,screen,410,200);}


afficher_load(key1,screen,370,200);
if(pos_souris_rect(po,370,420,500,550)==1)
{if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
afficher_load(game_over,screen,250,300);
afficher_load(score_level,screen,310,30);
if(pos_press_souris(event,360,430,490,560)==1){Mix_PlayMusic(musique, -1);(*coon)=0;con=0;}

}




if((keys==0)&&(x==-7200)&&(xx>=740)&&(co107==1)){conn=2;}
if(conn==2)
{Mix_HaltMusic();
ee=1;(*n2)=0;if(sc1==1){Mix_PlayChannel(-1,scratch_victory,0);}sc1=0;
afficher_load(arr_plan,screen,200,0);
if(score==100){afficher_load(num1,screen,330,100);afficher_load(num0,screen,370,100);afficher_load(num0,screen,410,100);}
else
{

if((score/10)==0){afficher_load(num0,screen,370,120);}
if((score/10)==1){afficher_load(num1,screen,370,120);}
if((score/10)==2){afficher_load(num2,screen,370,120);}
if((score/10)==3){afficher_load(num3,screen,370,120);}
if((score/10)==4){afficher_load(num4,screen,370,120);}
if((score/10)==5){afficher_load(num5,screen,370,120);}
if((score/10)==6){afficher_load(num6,screen,370,120);}
if((score/10)==7){afficher_load(num7,screen,370,120);}
if((score/10)==8){afficher_load(num8,screen,370,120);}
if((score/10)==9){afficher_load(num9,screen,370,120);}
if((score%10)==0){afficher_load(num0,screen,410,120);}
if((score%10)==1){afficher_load(num1,screen,410,120);}
if((score%10)==2){afficher_load(num2,screen,410,120);}
if((score%10)==3){afficher_load(num3,screen,410,120);}
if((score%10)==4){afficher_load(num4,screen,410,120);}
if((score%10)==5){afficher_load(num5,screen,410,120);}
if((score%10)==6){afficher_load(num6,screen,410,120);}
if((score%10)==7){afficher_load(num7,screen,410,120);}
if((score%10)==8){afficher_load(num8,screen,410,120);}
if((score%10)==9){afficher_load(num9,screen,410,120);}
}
afficher_load(win,screen,250,220);
afficher_load(score_level,screen,310,30);

afficher_load(etoile,screen,270,360);
afficher_load(etoile,screen,360,340);
afficher_load(etoile,screen,450,360);




if(score<20){*et=0;}
if((score>=20)&&(score<50)){*et=1;}
if((score>=50)&&((score/3)<80)){*et=2;}
if(score>=80){*et=3;}


if(*et==0)
{
if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;}
}
if(*et==1)
{connn++;if(connn==121){connn=120;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn==120){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;}   }}

if(*et==2)
{connn++;if(connn==201){connn=200;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn>=120){if(sc3==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc3=0;afficher_load(etoile1,screen,360,340); }if(connn==200){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;}   }}

if(*et==3)
{connn++;if(connn==281){connn=280;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn>=120){if(sc3==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc3=0;afficher_load(etoile1,screen,360,340); }if(connn>=200){if(sc4==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc4=0;afficher_load(etoile1,screen,450,360); }if(connn==280){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{sc5=1;afficher_load(home,screen,370,500);}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;} }   }


if(pos_press_souris(event,360,430,490,560)==1){Mix_PlayMusic(musique, -1);(*coon)=0;con=0;}
if(pos_press_souris(event,470,540,490,560)==1){Mix_PlayMusic(musique, -1);return;}




}
SDL_Delay (5);

if(conn!=2){SDL_Delay(5);}
SDL_Flip(screen);
}
}

/*------------level3------------*/


void level3(SDL_Surface* game_arr,SDL_Surface* game_home,Mix_Chunk* scratch_sword,SDL_Surface* sword,SDL_Surface* points,SDL_Surface* minute0,SDL_Surface* minute1,SDL_Surface* minute2,SDL_Surface* minute3,SDL_Surface* minute4,SDL_Surface* minute5,SDL_Surface* minute6,SDL_Surface* minute7,SDL_Surface* minute8,SDL_Surface* minute9,Mix_Chunk* scratch_flash,Mix_Chunk* scratch_cristal,SDL_Surface* speed2,SDL_Surface* score_speed0,SDL_Surface* score_speed1,SDL_Surface* score_speed2,SDL_Surface* score_speed3,SDL_Surface* score_speed4,SDL_Surface* score_speed5,SDL_Surface* score_speed6,SDL_Surface* score_speed7,SDL_Surface* score_speed8,SDL_Surface* score_speed9,SDL_Surface* speed1,SDL_Surface* cristal1,SDL_Surface* cristal2,SDL_Surface* cristal3,SDL_Surface* cristal4,SDL_Surface* cristal5,int *et,Mix_Music *musique,Mix_Music *jungle,Mix_Chunk* scratch,Mix_Chunk* scratch_hit,Mix_Chunk* scratch_jump,Mix_Chunk* scratch_coin,Mix_Chunk* scratch_key,Mix_Chunk* scratch_etoile,Mix_Chunk* scratch_victory,Mix_Chunk* scratch_fail,int *coon,int *n3,SDL_Surface* win,SDL_Surface* etoile,SDL_Surface* etoile1,SDL_Surface* next_level,SDL_Surface* next_level1,SDL_Surface* home1,SDL_Surface* score_level,SDL_Surface* game_over,SDL_Surface* home,SDL_Surface* arr_plan,SDL_Surface* key1,SDL_Surface* key2,SDL_Surface* key3,SDL_Surface* key4,SDL_Surface* key5,SDL_Surface* key6,SDL_Surface* num0,SDL_Surface* num1,SDL_Surface* num2,SDL_Surface* num3,SDL_Surface* num4,SDL_Surface* num5,SDL_Surface* num6,SDL_Surface* num7,SDL_Surface* num8,SDL_Surface* num9,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,SDL_Surface* game_play,SDL_Surface* game_pause,SDL_Surface* heart,SDL_Surface* screen,SDL_Surface* background3,SDL_Surface* background33,SDL_Surface* perso,SDL_Surface* perso1,SDL_Surface* perso2,SDL_Surface* perso3,SDL_Surface* persop,SDL_Surface* perso1p,SDL_Surface* perso2p,SDL_Surface* perso3p,SDL_Surface* b3enemi11,SDL_Surface* b3enemi12,SDL_Surface* b3enemi13,SDL_Surface* b3enemi11p,SDL_Surface* b3enemi12p,SDL_Surface* b3enemi13p,SDL_Surface* b3enemi21,SDL_Surface* b3enemi22,SDL_Surface* b3enemi23,SDL_Surface* b3enemi21p,SDL_Surface* b3enemi22p,SDL_Surface* b3enemi23p,int *continuer)
{
SDL_Event event; 
int co1=0,co2=0,co3=0,co4=0,co5=0,
co6=0,co7=0,co8=0,co9=0,co10=0,
co11=0,co12=0,co13=0,co14=0,co15=0,
co16=0,co17=0,co18=0,co19=0,co20=0,
co21=0,co22=0,co23=0,co24=0,co25=0,co26=0,co27=0,
co28=0,co29=0,co30=0,co31=0,co32=0,
co33=0,co34=0,co35=0,co36=0,co37=0,
co38=0,co39=0,co40=0,co41=0,co42=0,
co43=0,co44=0,co45=0,co46=0,co47=0,
co48=0,co49=0,co50=0,co51=0,co52=0,co53=0,co54=0,
co55=0,co56=0,co57=0,co58=0,co59=0,
co60=0,co61=0,co62=0,co63=0,co64=0,
co65=0,co66=0,co67=0,co68=0,co69=0,
co70=0,co71=0,co72=0,co73=0,co74=0,
co75=0,co76=0,co77=0,co78=0,co79=0,
co80=0,co81=0,co82=0,co83=0,co84=0,
co85=0,co86=0,co87=0,co88=0,co89=0,
co90=0,co91=0,co92=0,co93=0,co94=0,
co95=0,co96=0,co97=0,co98=0,co99=0,co100=0,
co101=0,co102=0,co103=0,co104=0,co105=0,co106=0,co107=0,
score=0;
int xe1=800,ye1=280,xe2=800,ye2=280,xe3=800,ye3=450,xe4=800,ye4=400,xe5=800,ye5=220;
int mmm1=1,mmm2=1,mmm3=1,mmm4=1,mmm5=1,mmm6=1,mmm7=1,mmm8=1,mmm9=1,mmm10=1,mmm11=1,mmm12=1,mmm13=1,mmm14=1,mmm15=1,mmm16=1,mmm17=1,mmm18=1,mmm19=1,mmm20=1,
mmm21=1,mmm22=1,mmm23=1,mmm24=1,mmm25=1,mmm26=1,mmm27=1,mmm28=1,mmm29=1,mmm30=1,mmm31=1,mmm32=1,mmm33=1,mmm34=1,mmm35=1,mmm36=1,mmm37=1,mmm38=1,mmm39=1,mmm40=1,
mmm41=1,mmm42=1,mmm43=1,mmm44=1,mmm45=1,mmm46=1,mmm47=1,mmm48=1,mmm49=1,mmm50=1,mmm51=1,mmm52=1,mmm53=1,mmm54=1,
mmm55=1,mmm56=1,mmm57=1,mmm58=1,mmm59=1,mmm60=1,mmm61=1,mmm62=1,mmm63=1,mmm64=1,mmm65=1,mmm66=1,mmm67=1,mmm68=1,mmm69=1,
mmm70=1,mmm71=1,mmm72=1,mmm73=1,mmm74=1,mmm75=1,mmm76=1,mmm77=1,mmm78=1,mmm79=1,mmm80=1,mmm81=1,mmm82=1,mmm83=1,mmm84=1,
mmm85=1,mmm86=1,mmm87=1,mmm88=1,mmm89=1,mmm90=1,mmm91=1,mmm92=1,mmm93=1,mmm94=1,mmm95=1,mmm96=1,mmm97=1,mmm98=1,mmm99=1,mmm100=1,
mmm101=1,mmm102=1,mmm103=1,mmm104=1,mmm105=1,mmm106=1;
int cys=400,ccys=0,minu=2,min=59,mi=0,cristals=1,v=0,t=0,tt=0,mo=0,sc6=1,sc5=1,sc1=1,sc2=1,sc3=1,sc4=1,connn=0,conn=1,mmmm=1,keys=3,e=0,ee=0,dd=0,d=6,con=1,c=-1,x=0,xx=220,y=0,yy=220,k=0,kk=0,kkk=0,a=1,aa=5,b=0,n=1,o=0,m=1,mm1=1,mm2=1,mm3=1,mm4=1,mm5=1,s=0,nn=0,j=0,ce1=0,ce2=0,ce3=0,ce4=0,ce5=0,nnn1=0,nnn2=0,nnn3=0,nnn4=0,nnn5=0,nnnn=0,vie=3;
Uint8 *keystates=SDL_GetKeyState(NULL);
SDL_Rect po;
Mix_PlayMusic(jungle, -1);

while((con!=0)&&(*continuer!=0))
{
k=0;kk=0;mo=0;
SDL_PollEvent(&event);

*continuer=gestion_clavier(event);
c=gestion_clavier(event);
po=gestion_souris(event);

if((e==0)&&(pos_press_souris(event,750,800,0,50)==1)){e=1;SDL_Delay(150); }
if((e==1)&&(pos_press_souris(event,425,475,125,175)==1)){e=0;SDL_Delay(150); }
if((e==0)&&(ee==0))
{
/*-----move-----*/
if(c==3){move_right(&x,&xx,&n,&nnnn);k=1;m++; }
if(c==4){move_left(&x,&xx,&n,&nnnn);k=1;m--; } 

if(pos_press_souris(event,xx,800,0,600)==1){move_right(&x,&xx,&n,&nnnn);k=1;m++;}
if(pos_press_souris(event,0,xx,0,600)==1){move_left(&x,&xx,&n,&nnnn);k=1;m--;}

if(k==0){move_keystate(keystates,&x,&xx,&n,&nnnn,&m,&mo);}
if((k==0)&&(c==-1)&&(mo==0)){m=0;afficher_load(perso1,screen,xx,yy);}

if((c==1)||((event.button.button==SDL_BUTTON_RIGHT)&&(event.type==SDL_MOUSEBUTTONDOWN))){jump_up(scratch_jump,&a,&o,&yy,&kk,&kkk);m=3;}
if(nnnn==1){ xx+=4;x+=4;  if( (xx==500) ){nnnn=0;} }
if(nnnn==2){ xx-=4;x-=4;  if( (xx==300) ){nnnn=0;} }

/*--------------*/


collision_background(background33,&xx,&yy,&s,&x,&kk,&kkk,&a,&o,&m,&nnnn);
if(kk==0){jump_down(&a,&o,&yy,&kkk,&m);}


if(nn==0){if(collision_ab(x,xx,yy,xe1,ye1)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe2,ye2)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe3,ye3)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe4,ye4)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(nn==0){if(collision_ab(x,xx,yy,xe5,ye5)==1){Mix_PlayChannel(-1,scratch_hit,0);vie--;if(vie==0){conn=0; }nn=1;} }
if(yy>=600){xe1=800;ye1=280;xe2=800;ye2=280;xe3=800;ye3=450;xe4=800;ye4=400;xe5=800;ye5=220;x=0; xx=220;yy=220;vie--;if(vie==0){conn=0;} }
if(nn==1){d--;if(d==0){d=10;dd++;}if(dd==10){dd=0;nn=0;} }

afficher_load(background3,screen,x,y);if(m==7){m=1;}if(m<=0){m=6;}
if((k==0)&&(c==-1)&&(mo==0)){m=0;}

if(d>5){animation_perso(screen,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,xx,yy,n,m); }



if(vie==3){afficher_load(heart,screen,0,0);afficher_load(heart,screen,50,0);afficher_load(heart,screen,100,0);}
if(vie==2){afficher_load(heart,screen,0,0);afficher_load(heart,screen,50,0);}
if(vie==1){afficher_load(heart,screen,0,0);}


animation_score(scratch_coin,&co1,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm1,-100,-900,250);
animation_score(scratch_coin,&co2,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm2,-120,-920,250);
animation_score(scratch_coin,&co3,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm3,-140,-940,250);
animation_score(scratch_coin,&co4,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm4,-160,-960,250);
animation_score(scratch_coin,&co5,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm5,-180,-980,250);

animation_score(scratch_coin,&co6,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm6,-300,-1100,250);
animation_score(scratch_coin,&co7,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm7,-320,-1120,250);
animation_score(scratch_coin,&co8,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm8,-340,-1140,250);
animation_score(scratch_coin,&co9,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm9,-360,-1160,250);
animation_score(scratch_coin,&co10,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm10,-380,-1180,250);

animation_score(scratch_coin,&co11,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm11,-700,-1500,250);
animation_score(scratch_coin,&co12,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm12,-720,-1520,220);
animation_score(scratch_coin,&co13,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm13,-740,-1540,200);
animation_score(scratch_coin,&co14,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm14,-760,-1560,220);
animation_score(scratch_coin,&co15,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm15,-780,-1580,250);

animation_score(scratch_coin,&co16,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm16,-1100,-1900,250);
animation_score(scratch_coin,&co17,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm17,-1120,-1920,220);
animation_score(scratch_coin,&co18,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm18,-1140,-1940,200);
animation_score(scratch_coin,&co19,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm19,-1160,-1960,220);
animation_score(scratch_coin,&co20,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm20,-1180,-1980,250);

animation_score(scratch_coin,&co70,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm70,-1820,-2620,340);
animation_score(scratch_coin,&co71,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm71,-1800,-2600,340);

animation_score(scratch_coin,&co72,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm72,-2210,-3010,340);
animation_score(scratch_coin,&co73,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm73,-2190,-2990,340);

animation_score(scratch_coin,&co74,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm74,-1880,-2680,230);
animation_score(scratch_coin,&co75,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm75,-1900,-2700,230);
animation_score(scratch_coin,&co76,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm76,-1920,-2720,230);

animation_score(scratch_coin,&co77,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm77,-2090,-2890,230);
animation_score(scratch_coin,&co78,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm78,-2110,-2910,230);
animation_score(scratch_coin,&co79,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm79,-2130,-2930,230);

animation_score(scratch_coin,&co80,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm80,-1970,-2770,300);
animation_score(scratch_coin,&co81,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm81,-1990,-2790,300);
animation_score(scratch_coin,&co82,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm82,-2010,-2810,300);
animation_score(scratch_coin,&co83,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm83,-2030,-2830,300);
animation_score(scratch_coin,&co84,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm84,-2050,-2850,300);

animation_score(scratch_coin,&co21,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm21,-2740,-3540,350);
animation_score(scratch_coin,&co22,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm22,-2760,-3560,320);
animation_score(scratch_coin,&co23,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm23,-2780,-3580,300);
animation_score(scratch_coin,&co24,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm24,-2800,-3600,320);
animation_score(scratch_coin,&co25,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm25,-2820,-3620,350);
animation_score(scratch_coin,&co26,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm26,-2720,-3520,380);
animation_score(scratch_coin,&co27,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm27,-2840,-3640,380);

animation_score(scratch_coin,&co28,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm28,-4000,-4800,250);
animation_score(scratch_coin,&co29,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm29,-4020,-4820,220);
animation_score(scratch_coin,&co30,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm30,-4040,-4840,200);
animation_score(scratch_coin,&co31,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm31,-4060,-4860,220);
animation_score(scratch_coin,&co32,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm32,-4080,-4880,250);

animation_score(scratch_coin,&co33,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm33,-4200,-5000,370);
animation_score(scratch_coin,&co34,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm34,-4220,-5020,370);
animation_score(scratch_coin,&co35,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm35,-4240,-5040,370);
animation_score(scratch_coin,&co36,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm36,-4260,-5060,370);
animation_score(scratch_coin,&co37,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm37,-4280,-5080,370);

animation_score(scratch_coin,&co38,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm38,-4400,-5200,250);
animation_score(scratch_coin,&co39,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm39,-4420,-5220,220);
animation_score(scratch_coin,&co40,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm40,-4440,-5240,200);
animation_score(scratch_coin,&co41,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm41,-4460,-5260,220);
animation_score(scratch_coin,&co42,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm42,-4480,-5280,250);

animation_score(scratch_coin,&co85,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm85,-4910,-5710,330);
animation_score(scratch_coin,&co86,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm86,-4830,-5630,330);
animation_score(scratch_coin,&co87,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm87,-4850,-5650,330);
animation_score(scratch_coin,&co88,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm88,-4870,-5670,330);
animation_score(scratch_coin,&co89,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm89,-4890,-5690,330);

animation_score(scratch_coin,&co90,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm90,-5110,-5810,330);
animation_score(scratch_coin,&co91,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm91,-5030,-5830,330);
animation_score(scratch_coin,&co92,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm92,-5050,-5850,330);
animation_score(scratch_coin,&co93,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm93,-5070,-5870,330);
animation_score(scratch_coin,&co94,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm94,-5090,-5890,330);


animation_score(scratch_coin,&co95,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm95,-4960,-5760,300);
animation_score(scratch_coin,&co96,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm96,-4960,-5760,280);
animation_score(scratch_coin,&co97,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm97,-4960,-5760,260);
animation_score(scratch_coin,&co98,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm98,-4980,-5780,300);
animation_score(scratch_coin,&co99,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm99,-4980,-5780,280);
animation_score(scratch_coin,&co100,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm100,-4980,-5780,260);

animation_score(scratch_coin,&co43,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm43,-5350,-6150,270);
animation_score(scratch_coin,&co44,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm44,-5370,-6170,270);
animation_score(scratch_coin,&co45,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm45,-5390,-6190,270);
animation_score(scratch_coin,&co46,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm46,-5410,-6210,270);
animation_score(scratch_coin,&co47,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm47,-5430,-6230,270);

animation_score(scratch_coin,&co48,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm48,-5600,-6400,220);
animation_score(scratch_coin,&co49,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm49,-5620,-6420,200);
animation_score(scratch_coin,&co50,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm50,-5640,-6440,220);
animation_score(scratch_coin,&co51,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm51,-5660,-6460,240);
animation_score(scratch_coin,&co52,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm52,-5680,-6480,260);
animation_score(scratch_coin,&co53,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm53,-5700,-6500,280);
animation_score(scratch_coin,&co54,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm54,-5720,-6520,300);

animation_score(scratch_coin,&co55,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm55,-5850,-6650,270);
animation_score(scratch_coin,&co56,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm56,-5870,-6670,270);
animation_score(scratch_coin,&co57,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm57,-5890,-6690,270);
animation_score(scratch_coin,&co58,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm58,-5910,-6710,270);
animation_score(scratch_coin,&co59,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm59,-5930,-6730,270);

animation_score(scratch_coin,&co60,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm60,-6050,-6850,270);
animation_score(scratch_coin,&co61,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm61,-6070,-6870,270);
animation_score(scratch_coin,&co62,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm62,-6090,-6890,270);
animation_score(scratch_coin,&co63,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm63,-6110,-6910,270);
animation_score(scratch_coin,&co64,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm64,-6130,-6930,270);

animation_score(scratch_coin,&co65,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm65,-6450,-7250,250);
animation_score(scratch_coin,&co66,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm66,-6470,-7270,220);
animation_score(scratch_coin,&co67,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm67,-6490,-7290,200);
animation_score(scratch_coin,&co68,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm68,-6510,-7310,220);
animation_score(scratch_coin,&co69,xx,yy,screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,x,&mmm69,-6530,-7330,250);


animation_score(scratch_key,&co102,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm102,-1350,-2150,250);
animation_score(scratch_key,&co103,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm103,-5500,-6300,200);
animation_score(scratch_key,&co104,xx,yy,screen,key1,key1,key2,key3,key4,key5,key6,key6,x,&mmm104,-2780,-3580,200);

animation_enemi(screen,b3enemi11,b3enemi12,b3enemi13,b3enemi11p,b3enemi12p,b3enemi13p,x,&xe1,&ye1,&nnn1,&ce1,&mm1,80,-300,-1180);
animation_enemi(screen,b3enemi11,b3enemi12,b3enemi13,b3enemi11p,b3enemi12p,b3enemi13p,x,&xe2,&ye2,&nnn2,&ce2,&mm2,100,-1080,-2300);
animation_enemi(screen,b3enemi21,b3enemi22,b3enemi23,b3enemi21p,b3enemi22p,b3enemi23p,x,&xe3,&ye3,&nnn3,&ce3,&mm3,200,-2400,-3600);
animation_enemi(screen,b3enemi21,b3enemi22,b3enemi23,b3enemi21p,b3enemi22p,b3enemi23p,x,&xe4,&ye4,&nnn4,&ce4,&mm4,200,-3400,-4700);
animation_enemi(screen,b3enemi11,b3enemi12,b3enemi13,b3enemi11p,b3enemi12p,b3enemi13p,x,&xe5,&ye5,&nnn5,&ce5,&mm5,150,-5320,-6570);



animation_cristal(scratch_cristal,&co105,xx,yy,screen,cristal1,cristal2,cristal3,cristal4,cristal5,x,&mmm105,0,-800,250,400);
animation_cristal(scratch_cristal,&co106,xx,yy,screen,cristal1,cristal2,cristal3,cristal4,cristal5,x,&mmm106,-500,-1300,250,800);


if(ccys==0){cys++;}if(cys==450){ccys=1;}if(ccys==1){cys--;}if(cys==400){ccys=0;}
animation_sword(scratch_sword,&co107,xx,yy,screen,sword,x,-6650,-7200,cys,800);






if((co105==1)&&(c==6)&&(t<30)){Mix_PlayChannel(-1,scratch_flash,0);t++;v=4;if(n==1){if(xx==300){x-=4+v;}else{xx+=4;}afficher_load(speed1,screen,xx-60,yy+40);}if(n==2){if(xx==500){x+=4+v;}else{xx-=4;}afficher_load(speed2,screen,xx-30,yy+40);}}

if((co106==1)&&(c==6)&&(tt<30)){Mix_PlayChannel(-1,scratch_flash,0);tt++;v=4;if(n==1){if(xx==300){x-=4+v;}else{xx+=4;}afficher_load(speed1,screen,xx-60,yy+40);}if(n==2){if(xx==500){x+=4+v;}else{xx-=4;}afficher_load(speed2,screen,xx-30,yy+40);}}


if((co105!=1)&&(co106!=1)){afficher_load(score_speed0,screen,70,240);afficher_load(score_speed0,screen,90,240);}
if((co105==1)&&(co106!=1))
{

if(((30-t)/10)==0){afficher_load(score_speed0,screen,70,240);}
if(((30-t)/10)==1){afficher_load(score_speed1,screen,70,240);}
if(((30-t)/10)==2){afficher_load(score_speed2,screen,70,240);}
if(((30-t)/10)==3){afficher_load(score_speed3,screen,70,240);}
if(((30-t)/10)==4){afficher_load(score_speed4,screen,70,240);}
if(((30-t)/10)==5){afficher_load(score_speed5,screen,70,240);}
if(((30-t)/10)==6){afficher_load(score_speed6,screen,70,240);}
if(((30-t)/10)==7){afficher_load(score_speed7,screen,70,240);}
if(((30-t)/10)==8){afficher_load(score_speed8,screen,70,240);}
if(((30-t)/10)==9){afficher_load(score_speed9,screen,70,240);}
if(((30-t)%10)==0){afficher_load(score_speed0,screen,90,240);}
if(((30-t)%10)==1){afficher_load(score_speed1,screen,90,240);}
if(((30-t)%10)==2){afficher_load(score_speed2,screen,90,240);}
if(((30-t)%10)==3){afficher_load(score_speed3,screen,90,240);}
if(((30-t)%10)==4){afficher_load(score_speed4,screen,90,240);}
if(((30-t)%10)==5){afficher_load(score_speed5,screen,90,240);}
if(((30-t)%10)==6){afficher_load(score_speed6,screen,90,240);}
if(((30-t)%10)==7){afficher_load(score_speed7,screen,90,240);}
if(((30-t)%10)==8){afficher_load(score_speed8,screen,90,240);}
if(((30-t)%10)==9){afficher_load(score_speed9,screen,90,240);}



}
if((co105!=1)&&(co106==1))
{

if(((30-tt)/10)==0){afficher_load(score_speed0,screen,70,240);}
if(((30-tt)/10)==1){afficher_load(score_speed1,screen,70,240);}
if(((30-tt)/10)==2){afficher_load(score_speed2,screen,70,240);}
if(((30-tt)/10)==3){afficher_load(score_speed3,screen,70,240);}
if(((30-tt)/10)==4){afficher_load(score_speed4,screen,70,240);}
if(((30-tt)/10)==5){afficher_load(score_speed5,screen,70,240);}
if(((30-tt)/10)==6){afficher_load(score_speed6,screen,70,240);}
if(((30-tt)/10)==7){afficher_load(score_speed7,screen,70,240);}
if(((30-tt)/10)==8){afficher_load(score_speed8,screen,70,240);}
if(((30-tt)/10)==9){afficher_load(score_speed9,screen,70,240);}
if(((30-tt)%10)==0){afficher_load(score_speed0,screen,90,240);}
if(((30-tt)%10)==1){afficher_load(score_speed1,screen,90,240);}
if(((30-tt)%10)==2){afficher_load(score_speed2,screen,90,240);}
if(((30-tt)%10)==3){afficher_load(score_speed3,screen,90,240);}
if(((30-tt)%10)==4){afficher_load(score_speed4,screen,90,240);}
if(((30-tt)%10)==5){afficher_load(score_speed5,screen,90,240);}
if(((30-tt)%10)==6){afficher_load(score_speed6,screen,90,240);}
if(((30-tt)%10)==7){afficher_load(score_speed7,screen,90,240);}
if(((30-tt)%10)==8){afficher_load(score_speed8,screen,90,240);}
if(((30-tt)%10)==9){afficher_load(score_speed9,screen,90,240);}
}

if((co105==1)&&(co106==1))
{

if((((30-t)+(30-tt))/10)==0){afficher_load(score_speed0,screen,70,240);}
if((((30-t)+(30-tt))/10)==1){afficher_load(score_speed1,screen,70,240);}
if((((30-t)+(30-tt))/10)==2){afficher_load(score_speed2,screen,70,240);}
if((((30-t)+(30-tt))/10)==3){afficher_load(score_speed3,screen,70,240);}
if((((30-t)+(30-tt))/10)==4){afficher_load(score_speed4,screen,70,240);}
if((((30-t)+(30-tt))/10)==5){afficher_load(score_speed5,screen,70,240);}
if((((30-t)+(30-tt))/10)==6){afficher_load(score_speed6,screen,70,240);}
if((((30-t)+(30-tt))/10)==7){afficher_load(score_speed7,screen,70,240);}
if((((30-t)+(30-tt))/10)==8){afficher_load(score_speed8,screen,70,240);}
if((((30-t)+(30-tt))/10)==9){afficher_load(score_speed9,screen,70,240);}
if((((30-t)+(30-tt))%10)==0){afficher_load(score_speed0,screen,90,240);}
if((((30-t)+(30-tt))%10)==1){afficher_load(score_speed1,screen,90,240);}
if((((30-t)+(30-tt))%10)==2){afficher_load(score_speed2,screen,90,240);}
if((((30-t)+(30-tt))%10)==3){afficher_load(score_speed3,screen,90,240);}
if((((30-t)+(30-tt))%10)==4){afficher_load(score_speed4,screen,90,240);}
if((((30-t)+(30-tt))%10)==5){afficher_load(score_speed5,screen,90,240);}
if((((30-t)+(30-tt))%10)==6){afficher_load(score_speed6,screen,90,240);}
if((((30-t)+(30-tt))%10)==7){afficher_load(score_speed7,screen,90,240);}
if((((30-t)+(30-tt))%10)==8){afficher_load(score_speed8,screen,90,240);}
if((((30-t)+(30-tt))%10)==9){afficher_load(score_speed9,screen,90,240);}



}








if(mmmm==19){mmmm=1;}
if((mmmm==1)||(mmmm==2)||(mmmm==3)){afficher_load(key1,screen,20,160);}
if((mmmm==4)||(mmmm==5)||(mmmm==6)){afficher_load(key2,screen,20,160);}
if((mmmm==7)||(mmmm==8)||(mmmm==9)){afficher_load(key3,screen,20,160);}
if((mmmm==10)||(mmmm==11)||(mmmm==12)){afficher_load(key4,screen,20,160);}
if((mmmm==13)||(mmmm==14)||(mmmm==15)){afficher_load(key5,screen,20,160);}
if((mmmm==16)||(mmmm==17)||(mmmm==18)){afficher_load(key6,screen,20,160);}
mmmm++;

if(keys==0){afficher_load(num0,screen,50,140);}
if(keys==1){afficher_load(num1,screen,50,140);}
if(keys==2){afficher_load(num2,screen,50,140);}
if(keys==3){afficher_load(num3,screen,50,140);}


if((cristals==1)||(cristals==2)||(cristals==3)||(cristals==4)||(cristals==5)||(cristals==6)){afficher_load(cristal1,screen,20,230);}
if((cristals==7)||(cristals==8)||(cristals==9)||(cristals==10)||(cristals==11)||(cristals==12)){afficher_load(cristal2,screen,20,230);}
if((cristals==13)||(cristals==14)||(cristals==15)||(cristals==16)||(cristals==17)||(cristals==18)){afficher_load(cristal3,screen,20,230);}
if((cristals==19)||(cristals==20)||(cristals==21)||(cristals==22)||(cristals==23)||(cristals==24)){afficher_load(cristal4,screen,20,230);}
if((cristals==25)||(cristals==26)||(cristals==27)||(cristals==28)||(cristals==29)||(cristals==30)){afficher_load(cristal5,screen,20,230);}

(cristals)++;if(cristals==31){cristals=1;}



if(score==100){afficher_load(num1,screen,340,0);afficher_load(num0,screen,380,0);afficher_load(num0,screen,420,0);}
else
{

if((score/10)==0){afficher_load(num0,screen,380,0);}
if((score/10)==1){afficher_load(num1,screen,380,0);}
if((score/10)==2){afficher_load(num2,screen,380,0);}
if((score/10)==3){afficher_load(num3,screen,380,0);}
if((score/10)==4){afficher_load(num4,screen,380,0);}
if((score/10)==5){afficher_load(num5,screen,380,0);}
if((score/10)==6){afficher_load(num6,screen,380,0);}
if((score/10)==7){afficher_load(num7,screen,380,0);}
if((score/10)==8){afficher_load(num8,screen,380,0);}
if((score/10)==9){afficher_load(num9,screen,380,0);}
if((score%10)==0){afficher_load(num0,screen,420,0);}
if((score%10)==1){afficher_load(num1,screen,420,0);}
if((score%10)==2){afficher_load(num2,screen,420,0);}
if((score%10)==3){afficher_load(num3,screen,420,0);}
if((score%10)==4){afficher_load(num4,screen,420,0);}
if((score%10)==5){afficher_load(num5,screen,420,0);}
if((score%10)==6){afficher_load(num6,screen,420,0);}
if((score%10)==7){afficher_load(num7,screen,420,0);}
if((score%10)==8){afficher_load(num8,screen,420,0);}
if((score%10)==9){afficher_load(num9,screen,420,0);}

}




mi++;if(mi==60){min--;mi=0;}
if(min==-1){minu--;min=59;}

if((min/10)==0){afficher_load(minute0,screen,60,70);}
if((min/10)==1){afficher_load(minute1,screen,60,70);}
if((min/10)==2){afficher_load(minute2,screen,60,70);}
if((min/10)==3){afficher_load(minute3,screen,60,70);}
if((min/10)==4){afficher_load(minute4,screen,60,70);}
if((min/10)==5){afficher_load(minute5,screen,60,70);}
if((min/10)==6){afficher_load(minute6,screen,60,70);}
if((min/10)==7){afficher_load(minute7,screen,60,70);}
if((min/10)==8){afficher_load(minute8,screen,60,70);}
if((min/10)==9){afficher_load(minute9,screen,60,70);}
if((min%10)==0){afficher_load(minute0,screen,100,70);}
if((min%10)==1){afficher_load(minute1,screen,100,70);}
if((min%10)==2){afficher_load(minute2,screen,100,70);}
if((min%10)==3){afficher_load(minute3,screen,100,70);}
if((min%10)==4){afficher_load(minute4,screen,100,70);}
if((min%10)==5){afficher_load(minute5,screen,100,70);}
if((min%10)==6){afficher_load(minute6,screen,100,70);}
if((min%10)==7){afficher_load(minute7,screen,100,70);}
if((min%10)==8){afficher_load(minute8,screen,100,70);}
if((min%10)==9){afficher_load(minute9,screen,100,70);}
if(minu==0){afficher_load(minute0,screen,0,70);}
if(minu==1){afficher_load(minute1,screen,0,70);}
if(minu==2){afficher_load(minute2,screen,0,70);}
afficher_load(points,screen,30,70);





if((minu==0)&&(min==0)){conn=0;}





}


if(e==0){Mix_ResumeMusic();afficher_load(game_pause,screen,750,0);}
if(e==1)
{
Mix_PauseMusic();afficher_load(game_arr,screen,300,100);afficher_load(game_home,screen,325,125);afficher_load(game_play,screen,425,125);

if(pos_press_souris(event,325,375,125,175)==1){(*coon)=0;con=0;}





}

score=co1+co2+co3+co4+co5+co6+co7+co8+co9+co10+co11+co12+co13+co14+co15+co16+co17+co18+co19+co20+co21+co22+co23+co24+co25+co26+co27+co28+co29+co30+co31+co32+co33+co34+co35+co36+co37+co38+co39+co40+co41+co42+co43+co44+co45+co46+co47+co48+co49+co50+co51+co52+co53+co54+co55+co56+co57+co58+co59+co60+co61+co62+co63+co64+co65+co66+co67+co68+co69+co70+co71+co72+co73+co74+co75+co76+co77+co78+co79+co80+co81+co82+co83+co84+co85+co86+co87+co88+co89+co90+co91+co92+co93+co94+co95+co96+co97+co98+co99+co100;

keys=3-(co101+co102+co103+co104);


if(conn==0)
{Mix_HaltMusic();
keys=co101+co102+co103+co104;
ee=1;if(sc1==1){Mix_PlayChannel(-1,scratch_fail,0);}sc1=0;
afficher_load(arr_plan,screen,200,0);
if(score==100){afficher_load(num1,screen,330,100);afficher_load(num0,screen,370,100);afficher_load(num0,screen,410,100);}
else
{

if((score/10)==0){afficher_load(num0,screen,370,100);}
if((score/10)==1){afficher_load(num1,screen,370,100);}
if((score/10)==2){afficher_load(num2,screen,370,100);}
if((score/10)==3){afficher_load(num3,screen,370,100);}
if((score/10)==4){afficher_load(num4,screen,370,100);}
if((score/10)==5){afficher_load(num5,screen,370,100);}
if((score/10)==6){afficher_load(num6,screen,370,100);}
if((score/10)==7){afficher_load(num7,screen,370,100);}
if((score/10)==8){afficher_load(num8,screen,370,100);}
if((score/10)==9){afficher_load(num9,screen,370,100);}
if((score%10)==0){afficher_load(num0,screen,410,100);}
if((score%10)==1){afficher_load(num1,screen,410,100);}
if((score%10)==2){afficher_load(num2,screen,410,100);}
if((score%10)==3){afficher_load(num3,screen,410,100);}
if((score%10)==4){afficher_load(num4,screen,410,100);}
if((score%10)==5){afficher_load(num5,screen,410,100);}
if((score%10)==6){afficher_load(num6,screen,410,100);}
if((score%10)==7){afficher_load(num7,screen,410,100);}
if((score%10)==8){afficher_load(num8,screen,410,100);}
if((score%10)==9){afficher_load(num9,screen,410,100);}
}


if(keys==0){afficher_load(num0,screen,410,200);}
if(keys==1){afficher_load(num1,screen,410,200);}
if(keys==2){afficher_load(num2,screen,410,200);}
if(keys==3){afficher_load(num3,screen,410,200);}


afficher_load(key1,screen,370,200);
if(pos_souris_rect(po,370,420,500,550)==1)
{if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
afficher_load(game_over,screen,250,300);
afficher_load(score_level,screen,310,30);
if(pos_press_souris(event,360,430,490,560)==1){Mix_PlayMusic(musique, -1);(*coon)=0;con=0;}

}




if((keys==0)&&(x==-7200)&&(xx>=740)&&(co107==1)){conn=2;}
if(conn==2)
{Mix_HaltMusic();
ee=1;(*n3)=0;if(sc1==1){Mix_PlayChannel(-1,scratch_victory,0);}sc1=0;
afficher_load(arr_plan,screen,200,0);
if(score==100){afficher_load(num1,screen,330,100);afficher_load(num0,screen,370,100);afficher_load(num0,screen,410,100);}
else
{

if((score/10)==0){afficher_load(num0,screen,370,120);}
if((score/10)==1){afficher_load(num1,screen,370,120);}
if((score/10)==2){afficher_load(num2,screen,370,120);}
if((score/10)==3){afficher_load(num3,screen,370,120);}
if((score/10)==4){afficher_load(num4,screen,370,120);}
if((score/10)==5){afficher_load(num5,screen,370,120);}
if((score/10)==6){afficher_load(num6,screen,370,120);}
if((score/10)==7){afficher_load(num7,screen,370,120);}
if((score/10)==8){afficher_load(num8,screen,370,120);}
if((score/10)==9){afficher_load(num9,screen,370,120);}
if((score%10)==0){afficher_load(num0,screen,410,120);}
if((score%10)==1){afficher_load(num1,screen,410,120);}
if((score%10)==2){afficher_load(num2,screen,410,120);}
if((score%10)==3){afficher_load(num3,screen,410,120);}
if((score%10)==4){afficher_load(num4,screen,410,120);}
if((score%10)==5){afficher_load(num5,screen,410,120);}
if((score%10)==6){afficher_load(num6,screen,410,120);}
if((score%10)==7){afficher_load(num7,screen,410,120);}
if((score%10)==8){afficher_load(num8,screen,410,120);}
if((score%10)==9){afficher_load(num9,screen,410,120);}
}
afficher_load(win,screen,250,220);
afficher_load(score_level,screen,310,30);

afficher_load(etoile,screen,270,360);
afficher_load(etoile,screen,360,340);
afficher_load(etoile,screen,450,360);




if(score<20){*et=0;}
if((score>=20)&&(score<50)){*et=1;}
if((score>=50)&&((score/3)<80)){*et=2;}
if(score>=80){*et=3;}


if(*et==0)
{
if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;}
}
if(*et==1)
{connn++;if(connn==121){connn=120;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn==120){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;} }   }

if(*et==2)
{connn++;if(connn==201){connn=200;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn>=120){if(sc3==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc3=0;afficher_load(etoile1,screen,360,340); }if(connn==200){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{afficher_load(home,screen,370,500);sc5=1;}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;} }   }

if(*et==3)
{connn++;if(connn==281){connn=280;}if(connn>=80){if(sc2==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc2=0;afficher_load(etoile1,screen,270,360); }if(connn>=120){if(sc3==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc3=0;afficher_load(etoile1,screen,360,340); }if(connn>=200){if(sc4==1){Mix_PlayChannel(-1,scratch_etoile,0);}sc4=0;afficher_load(etoile1,screen,450,360); }if(connn==280){if(pos_souris_rect(po,370,420,500,550)==1){if(sc5==1){Mix_PlayChannel(-1,scratch,0);}sc5=0;afficher_load(home1,screen,360,490);}else{sc5=1;afficher_load(home,screen,370,500);}
if(pos_souris_rect(po,470,520,500,550)==1){if(sc6==1){Mix_PlayChannel(-1,scratch,0);}sc6=0;afficher_load(next_level1,screen,460,490);}else{afficher_load(next_level,screen,470,500);sc6=1;} }   }


if(pos_press_souris(event,360,430,490,560)==1){Mix_PlayMusic(musique, -1);(*coon)=0;con=0;}
if(pos_press_souris(event,470,540,490,560)==1){Mix_PlayMusic(musique, -1);return;}




}
SDL_Delay (5);

SDL_Flip(screen);
}
}
/*------------level4------------*/


void level4(SDL_Surface* game_arr,SDL_Surface* game_home,Mix_Chunk* scratch_sword,SDL_Surface* sword,SDL_Surface* points,SDL_Surface* minute0,SDL_Surface* minute1,SDL_Surface* minute2,SDL_Surface* minute3,SDL_Surface* minute4,SDL_Surface* minute5,SDL_Surface* minute6,SDL_Surface* minute7,SDL_Surface* minute8,SDL_Surface* minute9,Mix_Chunk* scratch_flash,Mix_Chunk* scratch_cristal,SDL_Surface* speed2,SDL_Surface* score_speed0,SDL_Surface* score_speed1,SDL_Surface* score_speed2,SDL_Surface* score_speed3,SDL_Surface* score_speed4,SDL_Surface* score_speed5,SDL_Surface* score_speed6,SDL_Surface* score_speed7,SDL_Surface* score_speed8,SDL_Surface* score_speed9,SDL_Surface* speed1,SDL_Surface* cristal1,SDL_Surface* cristal2,SDL_Surface* cristal3,SDL_Surface* cristal4,SDL_Surface* cristal5,Mix_Chunk* scratch,Mix_Chunk* scratch_hit,Mix_Chunk* scratch_jump,Mix_Chunk* scratch_coin,Mix_Chunk* scratch_key,Mix_Chunk* scratch_etoile,Mix_Chunk* scratch_victory,Mix_Chunk* scratch_fail,int *coon,int *n4,SDL_Surface* win,SDL_Surface* etoile,SDL_Surface* etoile1,SDL_Surface* next_level,SDL_Surface* next_level1,SDL_Surface* home1,SDL_Surface* score_level,SDL_Surface* game_over,SDL_Surface* home,SDL_Surface* arr_plan,SDL_Surface* key1,SDL_Surface* key2,SDL_Surface* key3,SDL_Surface* key4,SDL_Surface* key5,SDL_Surface* key6,SDL_Surface* num0,SDL_Surface* num1,SDL_Surface* num2,SDL_Surface* num3,SDL_Surface* num4,SDL_Surface* num5,SDL_Surface* num6,SDL_Surface* num7,SDL_Surface* num8,SDL_Surface* num9,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,SDL_Surface* game_play,SDL_Surface* game_pause,SDL_Surface* heart,SDL_Surface* screen,SDL_Surface* background4,SDL_Surface* background44,SDL_Surface* perso,SDL_Surface* perso1,SDL_Surface* perso2,SDL_Surface* perso3,SDL_Surface* persop,SDL_Surface* perso1p,SDL_Surface* perso2p,SDL_Surface* perso3p,int *continuer)
{
SDL_Event event; 
int mo=0,e=0,c=-1,x=0,xx=0,y=0,yy=360,k=0,kk=0,kkk=0,a=1,aa=5,b=0,n=1,o=0,m=1,s=0,nn=0,j=0,xe=0,ye=360,ce=0,nnn=0,nnnn=0,vie=3,con=1;
Uint8 *keystates=SDL_GetKeyState(NULL);

while((con!=0)&&(*continuer!=0))
{
k=0;kk=0;mo=0;
SDL_PollEvent(&event);

(*continuer)=gestion_clavier(event);
c=gestion_clavier(event);

if((e==0)&&(pos_press_souris(event,750,800,0,50)==1)){e=1;SDL_Delay(150); }
if((e==1)&&(pos_press_souris(event,350,450,100,200)==1)){e=0;SDL_Delay(150); }
if(e==0)
{
/*-----move-----*/
if(c==3){move_right(&x,&xx,&n,&nnnn);k=1;m++; }
if(c==4){move_left(&x,&xx,&n,&nnnn);k=1;m--; } 

if(pos_press_souris(event,xx,800,0,600)==1){move_right(&x,&xx,&n,&nnnn);k=1;m++;}
if(pos_press_souris(event,0,xx,0,600)==1){move_left(&x,&xx,&n,&nnnn);k=1;m--;}

if(k==0){move_keystate(keystates,&x,&xx,&n,&nnnn,&m,&mo);}


if((c==1)||((event.button.button==SDL_BUTTON_RIGHT)&&(event.type==SDL_MOUSEBUTTONDOWN))){jump_up(scratch_jump,&a,&o,&yy,&kk,&kkk);m=5;}
if(nnnn==1){ xx+=4;x+=4;  if( (xx==500) ){nnnn=0;} }
if(nnnn==2){ xx-=4;x-=4;  if( (xx==300) ){nnnn=0;} }

/*--------------*/


collision_background(background44,&xx,&yy,&s,&x,&kk,&kkk,&a,&o,&m,&nnnn);
if(kk==0){jump_down(&a,&o,&yy,&kkk,&m);}

if(yy>=600){x=0; xx=0;yy=360;vie--;if(vie==0){con=0;} }
if(m==7){m=1;}if(m<=0){m=6;}
if((k==0)&&(c==-1)&&(mo==0)){m=0;}

afficher_load(background4,screen,x,y);
animation_perso(screen,perso,perso1,perso2,perso3,persop,perso1p,perso2p,perso3p,xx,yy,n,m); 

if(vie==3){afficher_load(heart,screen,0,0);afficher_load(heart,screen,50,0);afficher_load(heart,screen,100,0);}
if(vie==2){afficher_load(heart,screen,0,0);afficher_load(heart,screen,50,0);}
if(vie==1){afficher_load(heart,screen,0,0);}
}

if(e==0){afficher_load(game_pause,screen,750,0);}
if(e==1){afficher_load(game_play,screen,350,100);}



SDL_Delay (5);
SDL_Flip(screen);
}
}




