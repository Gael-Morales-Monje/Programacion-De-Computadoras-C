

void linea(float X[],float Y[], int *n, float incr, float ini, float f);

void RutaCircular(int cx,int cy, int r, float CX[], float CY[],int *n);

void RutaCircular(int cx,int cy, int r, float CX[], float CY[],int *n){
	float angulo = 0;
	int ind = 0;
	while( angulo < 3*3.1416) {
		CX[ind] = r*cos(angulo) + cx;
		CY[ind] = r*sin(angulo) + cy;

		angulo = angulo+0.1;
		ind++;
	}
	*n = ind;

	
}

void linea(float X[],float Y[], int *n, float incr,float ini, float f) {
	float x = 0.0;
	int ind = ini;
	for(;x<f;x=x+1){
		float y = 2*x + 1;
		Y[ind] = y;
		X[ind] = x;
		ind++;
	}
	*n = ind;
}
