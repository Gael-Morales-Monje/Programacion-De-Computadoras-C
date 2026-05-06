#include<stdio.h>


float sum(float i, float j, float k); 

int main () {
	
	float i,j,k;
	while(1) {
		scanf("%f %f %f",&i,&j,&k);
	
		float r = sum(i,j,k);
	
		printf("%f + %f + %f = %f\n",i,j,k,r);


		if (i == -1 || j == -1 || k == -1){
			return 0;
		}

	}
	return 0;
}


float sum(float i, float j, float k) {
	float resultado = i + j + k;
	return resultado;
}



