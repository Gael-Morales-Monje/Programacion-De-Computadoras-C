#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>



void RutaCos(int *n, float Ruta[1000]);

void ImprimeArregloReal(int n, float Ruta[1000]);

void IniciarSVG(void);
void TerminarSVG(void);


void DibujaCirculoMov(int radio, int inicio, int Colores[3], float Ruta[1000],int n);

int main() {
	srand(time(NULL));

	float Ruta[1000]; int n;
	IniciarSVG();

	RutaCos(&n,Ruta);
	
	int Col[3];
	Col[0] = rand()%256;
	Col[1] = rand()%256;
	Col[2] = rand()%256;
	
	
	DibujaCirculoMov(rand()%20+5,0,Col,Ruta,n);

	//ImprimeArregloReal(n,Ruta);
	
	TerminarSVG();

	return 0;	
}




void DibujaCirculoMov(int radio, int inicio, int Colores[3], float Ruta[1000], int n){
	printf("<circle r='%d' fill='rgb(%d,%d,%d)'>\n",radio,Colores[0],Colores[1],Colores[2]);
	printf("<animateMotion dur='10s' begin='%d' repeatCount='indefinite' path='M",inicio);
	int x;
	for (x = 0; x < n ; x++) {
		printf("%d,%f ",x,Ruta[x]);
	}

	
	printf("z'></animateMotion>\n");
	printf("</circle>\n");

}

void TerminarSVG(void){
	printf("<text x='20' y='20'>Gael Morales Monje, 2216044x</text>\n</svg>\n");
}

void IniciarSVG(void){
	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
}

void RutaCos(int *n, float Ruta[1000]) {
	float angulo = 0 ;
	int i = 0;
	while (angulo < 2*3.1416) { 
		Ruta[i] = cos(angulo);
		i++;
		angulo = angulo + 0.01;
	}
	*n = i;

}


void ImprimeArregloReal(int n, float Ruta[1000]){
	int i ;

	for (i=0; i<n; i++) {
		printf("%f\n",Ruta[i]);
	
	}

}
