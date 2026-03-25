#include<stdio.h>

#include<time.h>

#include<stdlib.h>


int main() {
	
	srand(time(NULL));

	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");

	int r,g,b,rad;

	r = rand()%256;
	g = rand()%256;
	b = rand()%256;
	rad = rand()%15+5;
	
	float begin = 0;
	for(int i = 0; i<1000;i++){

		printf("<circle r='%d' fill='rgb(%d,%d,%d)'>",rad,r,g,b);
		printf("<animateMotion dur='10s' begin='%f' repeatCount='indefinite' path='M",begin);
		for(int i = 0;i<44;i++){
			float x,y;
			scanf("%f %f",&x,&y);
			printf("%.2f,%.2f ",x,y);
		}
		printf("z'></animateMotion></circle>\n");

	begin+=0.1;
	}

	printf("<text x='10' y='100'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>\n");
	return 0;
}
