#include<stdio.h>
#include<string.h>

int main() {
	//leer una palabra
	

	char varArr [20];

	scanf("%s", &varArr[0]);
	


	printf("%s\n",varArr);

	
	int longitud = strlen(varArr);


	printf("La Palabra %s tiene %d letras\n",varArr,longitud );
	
	putchar(varArr[20]);

	return 0;
}
