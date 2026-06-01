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
	int y = 100;
	int x = 100;
	int nf = 1;
	for (int k = y ; k < y+10*R; k += 2*R){
		printf("%d\n",k);
		int nc = 1;
		for(int i = x+R;i<x+10*R;i+=2*R ){
			
			if(nf> 1 || nf < 5){
				if(nc > 1 || nc < 5){

				}else {
					DibujarCirculo(ap,i,k,R,r,g,b);
				}
			}
			else {
				DibujarCirculo(ap,i,k,R,r,g,b);
			}
			nc++;

		}
		nf++;
	}




	TerminarSVG(ap);

	fclose(ap);

	return 0;
}
