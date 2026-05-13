#include "arreglos.h"

void IniciarSVG();
void DibujarCirculo();
void TerminarSVG();


void DibujarCirculoV2(int cx, int cy,int r, int Color[]);
void DibujarRutaCircular(float CX[], float CY[], int n);


void DibujarRutaCircular(float CX[], float CY[], int n){
	for (int i = 0; i<n; i++) {

		int cx = (int)CX[i];
		int cy = (int)CY[i];
		int r = rand()%5 +5;

		int Col[3];
		Col[0] = rand()%256;
		Col[1] = rand()%256;
		Col[2] = rand()%256;
		DibujarCirculoV2(cx,cy,r,Col);
	}


}


void DibujarCirculoV2(int cx, int cy,int r, int Color[]){
	
	printf("<circle cx='%d' cy='%d' r='%d' fill='rgb(%d,%d,%d)'></circle>\n",cx,cy,r,Color[0],Color[1],Color[2]);

}

void IniciarSVG(void) {
	printf("<svg width='500' Height='500' xmlns='http://www.w3.org/2000/svg'>\n");
}


void DibujarCirculo() {
	printf("<circle cx='250' cy='250' r='125' fill='lime'></circle>\n");
}

void TerminarSVG() {
	printf("</svg>\n");
}

void DibujarCirculoMov(float X[], float Y[], int n) {
	printf("<circle cx='250' cy='250' r='25' fill='orange'>\n");
	printf("<animateMotion dur='10s' repeatCount='indefinite' path='M");
	ImprimirCoordenadas(X,Y,n);
	printf("z'></animateMotion>\n");
	printf("</circle>\n");
}	


