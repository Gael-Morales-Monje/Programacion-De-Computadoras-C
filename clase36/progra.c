#include<stdio.h>

#include<stdlib.h>
#include<time.h>


#include "svgF.h"

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	int cx = rand()%300+500, cy = rand()%200+200, R = rand()%100+10;
      	int r = rand()%256;
      	int b = rand()%256;
      	int g = rand()%256;

	FILE *ap; ap = fopen(argv[1],"w");


	IniciarSVG(ap);
	DibujarCirculo(ap,cx,cy,R,r,g,b);
	R = 10;
	int cx2 = 0;
	for (int i = R; i < R*10;i+=2*R){
		DibujarCirculo(ap,i,cy,R,r,g,b);
		cx2 = i;
	}

	int cy2 = 0;
	for (int k = cy+ 2*R ;k < cy+R*8;k+=2*R ){
		printf("%d",k);
		DibujarCirculo(ap,cx2,k,R,r,g,b);
		cy2 = k;
	}

	int d = 0;
	for (int j = cx2-2*R; j> 0; j -= 2*R) {
		DibujarCirculo(ap,j,cy2,R,r,g,b);
		d = j;
	}

	for(int a = cy+R*4; a > 0;a-= 2*R){
		DibujarCirculo(ap,a,d,R,r,g,b);
	
	}



	
	




	TerminarSVG(ap);

	fclose(ap);

	return 0;
}
