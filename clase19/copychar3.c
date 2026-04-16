#include<stdio.h>



int main() {

	char nombre[344];
	char letra;
	int i = 0;
	for (i;i< 344; i++){
		letra = getchar();
		nombre[i] = letra;
	}
	nombre[i] = '\0';


	printf("%s\n", nombre);
		
	for (i; i>= 0; i--){
		putchar(nombre[i]);
	}

	return 0;
}
