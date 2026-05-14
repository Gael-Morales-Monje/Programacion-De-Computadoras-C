

void InicioSVG();
void TerminarSVG();

void Circulo(float cx,float cy, int r, int Col[]);
void DibujarRutaCircular(float CX[], float CY[],int n);

void RutaCircular(int cx,int cy, int r, float CX[], float CY[],int *n);



void DibujarRutaCircular(float CX[], float CY[],int n) {

	for(int i = 0; i<n;i++){
		float cx = CX[i];
		float cy = CY[i];
		int r = rand()%2 + 3;

		int Col[3];
		Col[0] = rand()%256;
		Col[1] = rand()%256;
		Col[2] = rand()%256;
		Circulo(cx,cy,r,Col);		


	}


}

void RutaCircular(int cx,int cy, int r, float CX[], float CY[],int *n){
	float angulo = 0;
	int ind = 0;
	while( angulo < 2*3.1416) {
		CX[ind] = r*cos(angulo) + cx;
		CY[ind] = r*sin(angulo) + cy;

		angulo = angulo+0.1;
		ind++;
	}
	*n = ind;
}

void Circulo(float cx,float cy, int r, int Col[]) {
	printf("<circle cx='%f' cy='%f' r='%d' fill='none' stroke='rgb(%d,%d,%d)' stroke-width='2'></circle>\n",cx,cy,r,Col[0],Col[1],Col[2]);
}

void InicioSVG(int ancho,int alto) {
	printf("<svg width='%d' height='%d' xmlns='http://www.w3.org/2000/svg'>\n",ancho,alto);
}


void TerminarSVG() {
	printf("</svg>\n");
}
