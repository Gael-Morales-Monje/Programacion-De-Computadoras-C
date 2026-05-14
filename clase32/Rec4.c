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
	CirculosRecursivos(500,500,150,nivel);
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
		for(float b=0;b<2; b=b+.2){
			DibujarCirculoMov(CX,CY,n,b);
		}
		CirculosRecursivos(cx+r,cy,r*.5,nivel-1);
		CirculosRecursivos(cx-r,cy,r*.5,nivel-1);
		CirculosRecursivos(cx,cy-3*r/2,r*.5,nivel-1);
		CirculosRecursivos(cx,cy+3*r/2,r*.5,nivel-1);
	}

}
