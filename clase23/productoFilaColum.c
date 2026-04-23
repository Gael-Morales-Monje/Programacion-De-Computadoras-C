#include<stdio.h>
#include<stdlib.h>

#include<time.h>

int main () {
	
	srand(time(NULL));


	int A [3][3], B[3][3];
		
	int f,c;
	// asignacion de datos
	for (f = 0; f< 3; f++){
		for(c = 0; c< 3; c++){
			A[f][c]= rand()%20;
			B[f][c]= rand()%20;
		}
	}

	
	///// implemento de producto fila columna
	
	int R[3][3];
	int suma = 0;


	for  (f = 0; f<3; f++) {	
		for(c = 0; c < 3; c++){
			for(int i = 0; i<3;i++) {
				R[f][c]	= A[f][i]*B[i][c];
			}
		}
	
	}
	
	
	
	for (f = 0; f< 3; f++){
		for(c = 0; c< 3; c++){
			printf("%d ",R[f][c]);
		}
		putchar('\n');
	}
	

	putchar('\n');

	


	for (f = 0; f< 3; f++){
		for(c = 0; c< 3; c++){
			printf("%d ",A[f][c]);
		}
		putchar('\n');
	}
	printf("B=[");
	
	for (f = 0; f< 3; f++){
		for(c = 0; c< 3; c++){
			printf("%d ",B[f][c]);
		}
		putchar('\n');
	}

	printf("]\n");


	/*
	printf("R=[");
	
	for (f = 0; f< 3; f++){
		for(c = 0; c< 3; c++){
			printf("%d ",R[f][c]);
		}
		putchar('\n');
	}
	printf("]\n");

*/

	return 0;
}
