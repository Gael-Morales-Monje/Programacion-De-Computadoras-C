#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#include "svgF.h"
int main(int argc, char *argv[]) {
	srand(time(NULL));

	int  R = 100;

	int DistX = 500, DistY = 500;


	FILE *ap = fopen(argv[1],"wr");
	FILE *af = fopen(argv[2],"w");
		
	float x,y;
	IniciarSVG(af);
	
	for( float i = 0; i <= 6.28; i+=0.1){
		x = R*cos(i) + DistX;
		y = R*sin(i) + DistY;
		fprintf(ap,"%f,%f ",x,y);
		DibujarCirculo(af,x,y,10,rand()%256,rand()%256,rand()%256);
	}

	TerminarSVG(af);
	
	




	fclose(af);
	
	fclose(ap);


	return 0;
}
