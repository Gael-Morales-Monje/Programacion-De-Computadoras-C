#include<stdio.h>

// f(x) = 3x - 7 


//Prototipo de la funcion
int f( int x );


int main() {

	int inicio, fin;

	scanf("%d %d",&inicio,&fin);


	for(int i = inicio; i<fin; i++){
		printf("x=%d f(%d)=%d\n",i,i,f(i));
	
		
	}



	return 0;
}

int f( int x ){
	int resultado;
	resultado = 3*x - 7;
	return resultado;
}

