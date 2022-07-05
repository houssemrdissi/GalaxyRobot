#include"libfonctions.h"
#include"libcollision.h"


SDL_Color getpixel(SDL_Surface *background11,int xp,int yp)
{

SDL_Color color;
Uint32 col=0;

char *pPosition=(char*) background11->pixels;

pPosition+= (background11->pitch *yp);
pPosition+= (background11->format->BytesPerPixel *xp);
memcpy(&col,pPosition,background11->format->BytesPerPixel);
SDL_GetRGB(col,background11->format,&color.r,&color.g,&color.b);
return(color);
}

/*------------------------------*/

void collision_background(SDL_Surface *background11,int *xx,int *yy,int *s,int *x,int *kk,int *kkk,int *a,int *o,int *m,int *nnnn)
{
int xp1=0,yp1=0,xp2=0,yp2=0,xp3=0,yp3=0,xp4=0,yp4=0;
SDL_Color color1,color2,color3,color4;

xp1=*xx+50;yp1=*yy+60;
xp2=*xx;yp2=*yy+60;
xp3=*xx+25;yp3=*yy;
xp4=*xx+25;yp4=*yy+120;


color1=getpixel(background11,(-(*x))+xp1,yp1);
color2=getpixel(background11,(-(*x))+xp2,yp2);
color3=getpixel(background11,(-(*x))+xp3,yp3);
color4=getpixel(background11,(-(*x))+xp4,yp4);

if((color1.r==255)&&(color1.g==255)&&(color1.b==255)){if((*x==0)&&(*xx>=0)&&(*xx<=300)){if(*nnnn==2){*xx+=-4;}*xx+=-4;}else{if((*xx>=300)&&(*x!=0)){if(*nnnn==2){*x+=4;}*x+=4;}else{if((*xx>300)&&(*x==-7200)){if(*nnnn==2){*xx+=-4;}*xx+=-4;} }} }

if((color2.r==255)&&(color2.g==255)&&(color2.b==255)){if((*x==-7200)&&(*xx>=500)){if(*nnnn==1){*xx+=4;}*xx+=4;}if((*xx<=500)&&(*x>-7200)&&(*x<0)){if(*nnnn==1){*x+=-4;}*x+=-4;}if((*x==0)&&(*xx<=500)&&(*xx>=0)) {if(*nnnn==1){*xx+=4;}*xx+=4;}     }   

 
if((color4.r==255)&&(color4.g==255)&&(color4.b==255)){*kkk=0;*a=1;*o=0;}

if((color4.r!=255)&&(color4.g!=255)&&(color4.b!=255)&&(*kk==0)){if((720-yp4)<10){*yy+=720-yp4;*kk=1;*m=5;}if((720-yp4)>=10){*a=0;*yy+=10;*kk=1;*m=5;if(*o==1){*a=1;}}}

if((color3.r==255)&&(color3.g==255)&&(color3.b==255)){*kk=0;} 

if(yp4>=540){if((720-yp4)<10){*yy+=720-yp4;*kk=1;*m=5;}if((720-yp4)>=10){*a=0;*yy+=10;*kk=1;*m=5;if(*o==1){*a=1;}}}


//printf("%d %d %d|%d|%d|",color4.r,color4.g,color4.b,*kk,yp4);
//printf("(%d %d)",xp4,yp4);
//printf("[%d %d]",*xx,*yy);

}

/*------------------------------*/

int collision_ab(int x,int xx,int yy,int xe,int ye)
{int n=0;

if((xx+50>=xe)&&(xx+50<=xe+50)&&(yy+120>ye+70)&&(yy<=ye+100))   {n=1;return n;} 
if((xx>=xe)&&(xx<=xe+50)&&(yy+120>ye+70)&&(yy<=ye+100))   {n=1;return n;}      

return n;
}
/*------------------------------*/
int collision_ab_score(int x,int xx,int yy,int xe,int ye)
{int n=0;

if((xx+50>=xe)&&(xx+50<=xe+16)&&(yy+120>ye)&&(yy<=ye+16))   {n=1;return n;} 
if((xx>=xe)&&(xx<=xe+16)&&(yy+120>ye)&&(yy<=ye+16))   {n=1;return n;}      
if((xx+50>=xe+16)&&(xe>=xx)&&(yy+120>ye)&&(yy<=ye+16)){n=1;return n;}
return n;
}
