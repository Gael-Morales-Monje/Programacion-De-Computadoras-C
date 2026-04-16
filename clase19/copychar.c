#include<stdio.h>



int main() {

	char nombre[20];
	char letra;


	letra = getchar();
	
	nombre[0] = letra;
	letra = getchar();
	nombre[1]= letra;

	letra = getchar();
	nombre[2]= letra;
	letra = getchar();
	nombre[3]= letra;

	nombre[4] = '\0';


	printf("%s\n", nombre);

	return 0;
}
