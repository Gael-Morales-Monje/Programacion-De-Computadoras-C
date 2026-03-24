#include<stdlib.h>
#include<time.h>
#include<stdio.h>



int main() {
	srand(time(NULL));
	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
 	int rad,r,g,b,time;

	r = rand()%256;
	g = rand()%256;
	b = rand()%256;

	rad = rand()%40+10;

	
	for(int i=0; i<1000;i++){
		
		r = rand()%256;
		g = rand()%256;
		b = rand()%256;
		time = rand()%50+50;
	
	printf("<circle r='%d' fill='rgb(%d,%d,%d)'>\n",rad,r,g,b);

	printf("<animateMotion dur='%ds' begin='0' repeatCount='indefinite' path='M",time);
	for(int i=0;i<100;i++){
		int x,y;

		x = rand()%800 + 100;
		y = rand()%500 + 200;

		printf("%d,%d ",x, y);
	}	

	
	printf("z'></animateMotion>\n");
	printf("</circle>\n");
	}

	printf("<text x='10' y='100'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>");


	return 0;
}
