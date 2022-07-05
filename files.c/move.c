#include"libcollision.h"
#include"libmove.h"
#include"libfonctions.h"





void move_right(int *x,int *xx,int *n,int *nnnn)
{
if(*n==2)
{
  if((*xx>300)&&(*x>=-7000)){*nnnn=2;}
  if((*xx>300)&&(*x<=-7000)&&(*x>=-7200)){*xx-=*x+7200; *x=-7200; }


}

if(*nnnn==2){*xx+=4;}else{
if((*x==0)&&(*xx>=0)&&(*xx<300)){*xx+=4;}
if((*xx==300)&&(*x>-7200)){*x-=4;}
if((*xx>=300)&&(*xx<744)&&(*x==-7200)){*xx+=4; }
}
*n=1;
}

/*---------------------------------*/

void move_left(int *x,int *xx,int *n,int *nnnn)
{
if(*n==1)
{
  if((*x<=-2)&&(*x>=-200)){(*xx)+=-(*x);*x=0; }
  if((*x<-200)&&(*x>=-7200)){if((*xx>=300)&&(*xx<500)){*nnnn=1;   }else{if((*xx>300)&&(*xx<500)){*x+=500-(*xx);*xx=500; } } }
  
}

if(*nnnn==1){*xx-=4;}else{
if((*xx>500)&&(*xx<=744)&&(*x==-7200)){*xx-=4;}
if((*xx<=500)&&(*x>=-7200)&&(*x<0)){*x+=4;}
if((*xx>0)&&(*xx<=500)&&(*x==0)){*xx-=4; }
}
*n=2;
}

/*---------------------------------*/

void move_keystate(Uint8 *keystates,int *x,int *xx,int *n,int *nnnn,int *m,int *mo)
{
if(keystates[SDLK_LEFT])
{
move_left(&(*x),&(*xx),&(*n),&(*nnnn)); (*m)--;(*mo)=1;
}
else
{
 if(keystates[SDLK_RIGHT])
 {
 move_right(&(*x),&(*xx),&(*n),&(*nnnn));(*m)++;(*mo)=1;
 }
}

}

/*---------------------------------*/

void jump_up(Mix_Chunk *scratch_jump,int *a,int *o,int *yy,int *kk,int *kkk)
{

if(*a==1)
{
  if(*o==0)
  {
  if(*yy<=0){*kk=0;*a=0;return;} (*yy)-=10;/*yy-=aa;aa++;*/*kk=1;(*kkk)++;if(*kkk==24){*o=1;}if(*kkk==1){Mix_PlayChannel(-1,scratch_jump,0);}
  }

}

}

/*---------------------------------*/

void jump_down(int *a,int *o,int *yy,int *kkk,int *m)
{


if(*kkk!=0)
{
(*yy)+=10;/*aa--;yy+=aa;*/(*kkk)--;*a=0;if(*kkk==0){*a=1;*o=0;}*m=5;
}


}

/*---------------------------------*/

void animation_perso(SDL_Surface* screen,SDL_Surface* perso,SDL_Surface* perso1,SDL_Surface* perso2,SDL_Surface* perso3,SDL_Surface* persop,SDL_Surface* perso1p,SDL_Surface* perso2p,SDL_Surface* perso3p,int xx,int yy,int n,int m)

{

if(n==1)
{
if((m==1)||(m==2)){afficher_load(perso1,screen,xx,yy);}
if((m==3)||(m==4)){afficher_load(perso2,screen,xx,yy);}
if((m==5)||(m==6)){afficher_load(perso3,screen,xx,yy);}
if(m==0){afficher_load(perso,screen,xx,yy);}

}
if(n==2)
{
if((m==1)||(m==2)){afficher_load(perso1p,screen,xx,yy);}
if((m==3)||(m==4)){afficher_load(perso2p,screen,xx,yy);}
if((m==5)||(m==6)){afficher_load(perso3p,screen,xx,yy);}
if(m==0){afficher_load(persop,screen,xx,yy);}

}



}

/*---------------------------------*/

void animation_enemi(SDL_Surface* screen,SDL_Surface* b1enemi11,SDL_Surface* b1enemi12,SDL_Surface* b1enemi13,SDL_Surface* b1enemi11p,SDL_Surface* b1enemi12p,SDL_Surface* b1enemi13p,int x,int *xe,int *ye,int *nnn,int *ce,int *mm,int d,int xxe,int xxxe)
{



if((x<=xxe)&&(x>=xxxe))
{ 
(*xe)=800-(-x+xxe);if((*nnn)==0){(*ce)++;}if((*ce)==d){(*nnn)=1;}if((*nnn)==1){(*ce)--;}if((*ce)==0){(*nnn)=0;}(*xe)=(*xe)+(*ce);
(*mm)++;if((*mm)==28){(*mm)=1;}
if((*nnn)==1)
{
if(((*mm)==1)||((*mm)==2)||((*mm)==3)||((*mm)==4)||((*mm)==5)||((*mm)==6)||((*mm)==7)||((*mm)==8)||((*mm)==9)){afficher_load(b1enemi11,screen,(*xe),(*ye));}
if(((*mm)==10)||((*mm)==11)||((*mm)==12)||((*mm)==13)||((*mm)==14)||((*mm)==15)||((*mm)==16)||((*mm)==17)||((*mm)==18)){afficher_load(b1enemi12,screen,(*xe),(*ye));}
if(((*mm)==19)||((*mm)==20)||((*mm)==21)||((*mm)==22)||((*mm)==23)||((*mm)==24)||((*mm)==25)||((*mm)==26)||((*mm)==27)){afficher_load(b1enemi13,screen,(*xe),(*ye));}
}
if((*nnn)==0)
{
if(((*mm)==1)||((*mm)==2)||((*mm)==3)||((*mm)==4)||((*mm)==5)||((*mm)==6)||((*mm)==7)||((*mm)==8)||((*mm)==9)){afficher_load(b1enemi11p,screen,(*xe),(*ye));}
if(((*mm)==10)||((*mm)==11)||((*mm)==12)||((*mm)==13)||((*mm)==14)||((*mm)==15)||((*mm)==16)||((*mm)==17)||((*mm)==18)){afficher_load(b1enemi12p,screen,(*xe),(*ye));}
if(((*mm)==19)||((*mm)==20)||((*mm)==21)||((*mm)==22)||((*mm)==23)||((*mm)==24)||((*mm)==25)||((*mm)==26)||((*mm)==27)){afficher_load(b1enemi13p,screen,(*xe),(*ye));}
}

}

}


/*------------------------*/
void anim_score(SDL_Surface* screen,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,int *mmm,int xs,int ys)
{
if((*mmm==1)||(*mmm==2)){afficher_load(coin1,screen,xs,ys);}
if((*mmm==3)||(*mmm==4)){afficher_load(coin2,screen,xs,ys);}
if((*mmm==5)||(*mmm==6)){afficher_load(coin3,screen,xs,ys);}
if((*mmm==7)||(*mmm==8)){afficher_load(coin4,screen,xs,ys);}
if((*mmm==9)||(*mmm==10)){afficher_load(coin5,screen,xs,ys);}
if((*mmm==11)||(*mmm==12)){afficher_load(coin6,screen,xs,ys);}
if((*mmm==13)||(*mmm==14)){afficher_load(coin7,screen,xs,ys);}
if((*mmm==15)||(*mmm==16)){afficher_load(coin8,screen,xs,ys);}
(*mmm)++;if(*mmm==17){*mmm=1;}

}



/*------------------------*/

void animation_score(Mix_Chunk *scratch_coin,int *co,int xx,int yy,SDL_Surface* screen,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,SDL_Surface* coin6,SDL_Surface* coin7,SDL_Surface* coin8,int x,int *mmm,int a,int b,int ys)
{int xs;
(xs)=800-(-x+a);


if((x>=b)&&(x<=a))
{
if((collision_ab_score(x,xx,yy,xs,ys)==1)&&(*co==0)){Mix_PlayChannel(-1,scratch_coin,0);*co=1;return;}
if(*co==0){anim_score(screen,coin1,coin2,coin3,coin4,coin5,coin6,coin7,coin8,&(*mmm),xs,ys);}
}





}



/*-------------------------------------------*/


/*------------------------*/
void anim_score_cristal(SDL_Surface* screen,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,int *mmm,int xs,int ys)
{
if((*mmm==1)||(*mmm==2)||(*mmm==3)||(*mmm==4)||(*mmm==5)||(*mmm==6)){afficher_load(coin1,screen,xs,ys);}
if((*mmm==7)||(*mmm==8)||(*mmm==9)||(*mmm==10)||(*mmm==11)||(*mmm==12)){afficher_load(coin2,screen,xs,ys);}
if((*mmm==13)||(*mmm==14)||(*mmm==15)||(*mmm==16)||(*mmm==17)||(*mmm==18)){afficher_load(coin3,screen,xs,ys);}
if((*mmm==19)||(*mmm==20)||(*mmm==21)||(*mmm==22)||(*mmm==23)||(*mmm==24)){afficher_load(coin4,screen,xs,ys);}
if((*mmm==25)||(*mmm==26)||(*mmm==27)||(*mmm==28)||(*mmm==29)||(*mmm==30)){afficher_load(coin5,screen,xs,ys);}

(*mmm)++;if(*mmm==31){*mmm=1;}

}



/*------------------------*/

void animation_cristal(Mix_Chunk *scratch_coin,int *co,int xx,int yy,SDL_Surface* screen,SDL_Surface* coin1,SDL_Surface* coin2,SDL_Surface* coin3,SDL_Surface* coin4,SDL_Surface* coin5,int x,int *mmm,int a,int b,int ys,int l)
{int xs;
(xs)=l-(-x+a);


if((x>=b)&&(x<=a))
{
if((collision_ab_score(x,xx,yy,xs,ys)==1)&&(*co==0)){Mix_PlayChannel(-1,scratch_coin,0);*co=1;return;}
if(*co==0){anim_score_cristal(screen,coin1,coin2,coin3,coin4,coin5,&(*mmm),xs,ys);}
}





}


/*------------------------*/

void animation_sword(Mix_Chunk *scratch_coin,int *co,int xx,int yy,SDL_Surface* screen,SDL_Surface* coin1,int x,int a,int b,int ys,int l)
{int xs;
(xs)=l-(-x+a);


if((x>=b)&&(x<=a))
{
if((collision_ab_score(x,xx,yy,xs,ys)==1)&&(*co==0)){Mix_PlayChannel(-1,scratch_coin,0);*co=1;return;}
if(*co==0){afficher_load(coin1,screen,xs,ys);}
}





}





























