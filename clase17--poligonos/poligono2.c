#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main() {
	//int np;
	//scanf("%d",&np);
	//lee el numero de lados del poligono
	
	srand(time(NULL));


	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");


	for(int i = 0; i<7; i++){

		int r,g,b;

		r=rand()%256;
		g=rand()%256;
		b=rand()%256;

		printf("<polygon stroke='rgb(%d,%d,%d)' stroke-width='3' fill='rgb(%d,%d,%d)' points='",r,g,b,b,r,g);


		int np;
		scanf("%d",&np);
		
		for(int i=0; i< np;i ++){
			float x,y;

			scanf("%f %f",&x,&y);
			printf("%f %f\n",x*35.8,y*35.8);


		}
		
		printf("'></polygon>\n");
	}

	printf("</svg>");

	return 0;
}
