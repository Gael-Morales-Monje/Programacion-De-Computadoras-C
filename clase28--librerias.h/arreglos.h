


void ImprimirCoordenadas(float X[], float Y[], int n);
void ImprimirCoordenadas(float X[], float Y[], int n) {
	int i = 0;
	while (i< n-1) {
		printf("%.2f,%.2f ",X[i+1],Y[i+1]);
		i++;
	}
}
