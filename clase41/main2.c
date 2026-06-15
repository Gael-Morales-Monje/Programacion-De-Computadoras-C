#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#include "svgF2.h"


typedef struct coordenada {
	int x,y;
} COOR;
typedef struct color {
	int r,g,b;
} RGB;


typedef struct circle {
	int radio;
	COOR coor;
	RGB color;
} CIR;



void DibujarCir(CIR a);


int main() {
	srand(time(NULL));
	CIR b[50];

	IniciarS();
	for (int i = 0; i < 5;i++){
		b[i].coor.x = rand()%600+100;
		b[i].coor.y = rand()%600+100;
		b[i].radio = rand()%150+30;
		b[i].color.r = rand()%256;
		b[i].color.g = rand()%256;
		b[i].color.b = rand()%256;

		DibujarCir(b[i]);
	}

	int ctx = b[1].coor.x - b[0].coor.x


	TerminarS();
	return 0;
}



void DibujarCir(CIR a) {
	printf("<circle cx='%d' cy='%d' r='%d' fill='rgb(%d,%d,%d)'>\n",a.coor.x,a.coor.y,a.radio,a.color.r,a.color.g,a.color.b);
	printf("</circle>\n");
}
