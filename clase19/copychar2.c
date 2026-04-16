#include<stdio.h>



int main() {

	char nombre[20];
	char letra;

	for (int i = 0; i < 4; i++ ){
		letra = getchar();
		nombre[i] = letra;
	}
	nombre[4] = '\0';


	printf("%s\n", nombre);
		
	for (int i = 3; i>= 0; i--){
		putchar(nombre[i]);
	}

	return 0;
}
