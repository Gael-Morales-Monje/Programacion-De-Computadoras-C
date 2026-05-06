#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Encabezado(int ancho, int alto);
void TerminarSVG();
	
void DibujaCirculo(int cx,int cy, int r,int rojo,int verde,int azul);

void CaritaSorprendida(int cx, int cy, int radio, int r, int g, int b);

void CirculoMov(int radio, int r, int g, int b);


void main(void) {

	srand(time(NULL));


	int ancho,alto;
	scanf("%d %d",&ancho,&alto);
	int cx,cy,r; scanf("%d %d %d",&cx,&cy,&r);


	Encabezado(ancho, alto);
	
	DibujaCirculo(cx,cy,r,rand()%256,rand()%256,rand()%256);

	scanf("%d %d %d",&cx,&cy,&r);
	CaritaSorprendida(cx,cy,r,rand()%256,rand()%256,rand()%256);
	CirculoMov(20,rand()%200+100,0,0);
	TerminarSVG();
	
}



void CirculoMov(int radio, int r, int g, int b) {
	printf("<circle r='%d' fill='rgb(%d,%d,%d)' >\n",radio,r,g,b);
	printf("<animateMotion dur='10s' begin='1' repeatCount='indefinite' path='M");
	int a;
	for(a= 0; a<20;a++){
		printf("%d,%d ",rand()%200+100,rand()%200+100);
	}
	

	printf("z'></animateMotion>");
	printf("</circle>");
}



void Encabezado(int ancho, int alto) {
	printf("<svg width='%d' height='%d' xmlns='http://www.w3.org/2000/svg'>\n",ancho,alto);
	
}


void TerminarSVG( void ){
	printf("<text x='10' y='20'>Gael Morales Monje, 2216044x</text></svg>\n");

}


void DibujaCirculo(int cx,int cy, int r,int rojo,int verde,int azul) {
	printf("<circle cx='%d' cy='%d' r='%d' fill='rgb(%d ,%d ,%d)'></circle>",cx,cy,r,rojo,verde,azul);

}


void CaritaSorprendida(int cx, int cy, int radio, int r, int g, int b){
	DibujaCirculo(cx,cy,radio,r,g,b);
	//Nariz
	DibujaCirculo(cx,cy,radio*.15,b,g,r);
	//Boca
	DibujaCirculo(cx,cy+radio*.5,radio*.2,g,r,b);
	//Ojos
	DibujaCirculo(cx-radio*.35,cy-radio*.3,radio*.2,g,r,b);
	DibujaCirculo(cx+radio*.35,cy-radio*.3,radio*.2,g,r,b);


}



