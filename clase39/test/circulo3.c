#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#include "svgF.h"
int main(int argc, char *argv[]) {
	
	
	
	srand(time(NULL));


		

	for(int r = 10; r <=200;r+=10) {


		int DistX = rand()%201+400, DistY = rand()%201+400;

		char Nametxt[50];
		char Namesvg[50];
		
		sprintf(Nametxt,"Circulo%d.txt",r);
		sprintf(Namesvg,"Circulo%d.svg",r);
		
		
		FILE *ap = fopen(Nametxt,"w");
		FILE *af = fopen(Namesvg,"w");

		IniciarSVG(af);
		float x,y;
		for( float i = 0; i <= 6.28; i+=0.1){
			x = 1.5*r*cos(i) + DistX;
			y = r*sin(i) + DistY;
			fprintf(ap,"%f,%f ",x,y);
			DibujarCirculo(af,x,y,10,rand()%256,rand()%256,rand()%256);
		}

		TerminarSVG(af);

		fclose(af);
		fclose(ap);
	}

	
	




	


	return 0;
}
