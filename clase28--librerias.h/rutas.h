

void linea(float X[],float Y[], int *n, float incr, float ini, float f);




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
