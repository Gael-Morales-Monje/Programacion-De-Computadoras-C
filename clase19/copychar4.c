#include<stdio.h>



int main() {
	
	int log = 17111;

	char nombre[log];
	char letra;
	int i = 0;

	float count = 0;
	float countV = 0
	for (i;i < log; i++){
		letra = getchar();
			
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') countV++;
		if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') countV++;


		if (letra == 'a' || letra == 'A') {
			count++;
		}

		nombre[i] = letra;
	}
	nombre[i] = '\0';


	printf("%s\n", nombre);
		
	for (i; i>= 0; i--){
		putchar(nombre[i]);
	}

	printf("---------------------\n");

	printf("%f\n",count);

	float prom = count / log;
	

	float promV + count / countV;
	printf("%f ------ RESPECTO A LETRAS\n",prom*100);	
	printf("%f ------ RESPECTO A VOCALES\n",promV*100);	



	return 0;
}
