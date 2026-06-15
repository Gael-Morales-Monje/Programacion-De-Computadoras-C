#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

int main() {
		
	srand(time(NULL));


	CIR A;
	A.radio = 100;
	A.coor.x = 200;
	A.coor.y = 100;


	A.color.r= rand()%256;
	A.color.g= rand()%256;
	A.color.b= rand()%256;

	printf("%d %d %d %d %d %d",A.radio,A.coor.x,A.coor.y,A.color.r,A.color.g,A.color.b);

	return 0;
}
