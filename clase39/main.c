#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#include "svgF.h"
int main(int argc, char *argv[]) {
	
	srand(time(NULL));

	float R,angulo,fin,Inc;

	int DistX, DistY;
	

	R = atof(argv[1]);
	angulo = atof(argv[2]);
	fin = atof(argv[3]);
	Inc = atof(argv[4]);
	DistX = atoi(argv[5]);
	DistY = atoi(argv[6]);
	


	FILE *ap = fopen(argv[7],"wr");
	FILE *af = fopen(argv[8],"w");
		
	float x,y;
	IniciarSVG(af);
	
	for( float i = angulo; i <= fin; i+=Inc){
		x = R*cos(i) + DistX;
		y = R*sin(i) + DistY;
		fprintf(ap,"%f,%f ",x,y);
		DibujarCirculo(af,x,y,atoi(argv[9]),rand()%256,rand()%256,rand()%256);
	}

	TerminarSVG(af);
	
	




	fclose(af);
	
	fclose(ap);


	return 0;
}
