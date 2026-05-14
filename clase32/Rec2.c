#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#include "svg.h"
#include "rutas.h"


void CirculosRecursivos(int cx, int cy, int r, int nivel);



int main() {
	srand(time(NULL));
	int nivel ; scanf("%d",&nivel);

	IniciarSVG();
	CirculosRecursivos(500,500,300,nivel);
	TerminarSVG();

	return 0;
}



void CirculosRecursivos(int cx, int cy, int r, int nivel){
	if (nivel == 0) {
		return;
	} else {
		int n = 1000; 
		float CX[n],CY[n];
		n= 0;
		RutaCircular(cx,cy,r,CX,CY,&n);
		DibujarRutaCircular(CX,CY,n);
		DibujarCirculoMov(CX,CY,n);
		CirculosRecursivos(cx,cy,(int)(r*.8),nivel-1);
		CirculosRecursivos(cx-r/2,cy,(int)(r*.5),nivel-1);
	}

}
