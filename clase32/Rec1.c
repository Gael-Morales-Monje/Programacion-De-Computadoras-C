#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#include "svg.h"
#include "rutas.h"


void CirculosRecursivos(int cx, int cy, int r, int nivel);



int main() {
	srand(time(NULL));
	int n = 1000; 
	float cx[n],cy[n];
	n= 0;
	RutaCircular(500,500,200,cx,cy,&n);
	IniciarSVG();
	
	DibujarRutaCircular(cx,cy,n);

	DibujarCirculoMov(cx,cy,n);
	TerminarSVG();

	return 0;
}


