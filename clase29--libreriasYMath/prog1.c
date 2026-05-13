#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include<math.h>

#include "svg.h"
#include "rutas.h"
int main() {

	srand(time(NULL));

	int cx,cy,r,Color[3];
	
	IniciarSVG();
	
	for(int i = 0; i<10;i++) {

	cx = rand()%300+100;
	cy = rand()%300+100;
	
	r = rand()%100 + 50;

	Color[0] = rand()%256;
	Color[1] = rand()%256;
	Color[2] = rand()%256;

	
	DibujarCirculoV2(cx,cy,r,Color);
	
	float CX[1000],CY[1000]; int n;

	RutaCircular(cx,cy,r,CX,CY,&n);
	DibujarRutaCircular(CX,CY,n);
	}
	TerminarSVG();

	return 0;
}
