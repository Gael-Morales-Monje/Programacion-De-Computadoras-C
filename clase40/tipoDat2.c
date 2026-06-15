#include<stdio.h>

#include<stdlib.h>
#include<time.h>


struct punto {
	int x,y;


};


#include "svgF.h"
int main(int argc, char *argv[]) {

	struct punto A[100];
	
	FILE *ap = fopen(argv[1],"w");
	
	



	FILE *svg = fopen(argv[2], "w");
	
	int n = 0;
	for (n ; n < 4;n++) {
		fscanf(ap,"%d,%d",&A[n].x,&A[n].y);
	
	}


	IniciarSVG(svg);


	Polygon(A,svg,n);


	TerminarSVG(svg);
	
	fclose(ap);

	return 0;
}
