#include "arreglos.h"

void IniciarSVG();
void DibujarCirculo();
void TerminarSVG();



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
