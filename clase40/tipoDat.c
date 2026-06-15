#include<stdio.h>
#include<stdlib.h>
#include<time.h>



struct punto {
	int x,y;


};


#include "svgF.h"
int main(int argc, char *argv[]) {
	srand(time(NULL));
	struct punto A[5];
	
	struct punto B[100];
	

	FillArray(B,100);



	FILE *ap = fopen(argv[1],"r");
		
	FILE *svg = fopen(argv[2], "w");
	
	int n = 0;
	for (n ; n < 4;n++) {
		fscanf(ap,"%d,%d",&A[n].x,&A[n].y);
	
	}


	IniciarSVG(svg);


	Polygon(A,svg,n);


	TerminarSVG(svg);
	
	fclose(ap);
	fclose(svg);



	FILE *svg2 = fopen(argv[3],"w");

	IniciarSVG(svg2);
	
	
	for (int i = 0; i < 100; i++) {
		DibujarCirculo(svg2,B[i].x,B[i].y,10,rand()%256,rand()%256,rand()%256);
	}

	MovC(svg2,B,100);

	TerminarSVG(svg2);
	fclose(svg2);


	return 0;
}
