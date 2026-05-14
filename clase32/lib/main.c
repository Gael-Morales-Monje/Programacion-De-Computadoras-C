#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#include "lib.h"
int main() {
	
	srand(time(NULL));
	InicioSVG(1000,1000);
	
	
	float CX[100], CY[100];

	int n;



	RutaCircular(500,500,200,CX,CY,&n);
	DibujarRutaCircular(CX,CY,n);


	TerminarSVG();
	return 0;
}
