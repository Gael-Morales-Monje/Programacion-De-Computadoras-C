#include<stdio.h>
#include "svg.h"

#include "rutas.h"


int main() {
	float x[1000],y[1000];

	float inicio,fin;

	scanf("%f %f",&inicio,&fin);

	int n;
	
	IniciarSVG();
	DibujarCirculo();
	linea(x,y,&n,0.5,inicio,fin);
	DibujarCirculoMov(x,y,n);

	TerminarSVG();

	return 0;
}


