#include<stdlib.h>
#include<time.h>
#include<stdio.h>



int main() {
	srand(time(NULL));

	int x,y,r,g,b,rad;

	// dibujo de 1000 circulos`


	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
	for (int i=0;i<1000;i++){
		r = rand()%256;
		g = rand()%256;
		b = rand()%256;
		x = rand()%800 + 100;
		y = rand()%800 + 100;
		rad = rand()%40+10;
	

		printf("<circle cx='%d' cy='%d' r='%d' fill='rgb(%d,%d,%d)'/>",x,y,rad,r,g,b);

	}

	printf("<text x='10' y='100'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>");
	return 0;
}
