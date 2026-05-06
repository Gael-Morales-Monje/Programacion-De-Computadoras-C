#include<stdio.h>




int main () {


	int A[3][3],At[3][3];


	int fila,col;

	for (fila = 0 ; fila <3; fila++){
		for(col = 0;col<3;col++){
			scanf("%d",&A[fila][col]);
		}	
	}
	
	for (fila = 0 ; fila <3; fila++){
		for(col = 0;col<3;col++){
			printf("%d ",A[fila][col]);
		}
		putchar('\n');
	}

	putchar('\n');
	///transpuesta de A


	for (fila = 0 ; fila <3; fila++){
		for(col = 0;col<3;col++){
			At[col][fila] = A[fila][col];
		}	
	}




//	imprimir At


	for (fila = 0 ; fila <3; fila++){
		for(col = 0;col<3;col++){
			printf("%d ",At[fila][col]);
		}
		putchar('\n');
	}


	return 0;

}
