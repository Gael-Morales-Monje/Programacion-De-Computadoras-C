#include<stdlib.h>
#include<time.h>
#include<stdio.h>



int main() {
	srand(time(NULL));

	int r,g,b;

	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
		r = rand()%256;
		g = rand()%256;
		b = rand()%256;

		printf("<circle cx='500' cy='500' r='250' fill='rgb(%d,%d,%d)'/>",r,g,b);


	printf("<text x='10' y='100'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>");
	return 0;
}
