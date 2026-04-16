#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main () {

	int i = 0;
	char palabra[17111];

	while (scanf("%s",palabra)==1) {
		printf("%s %ld %c %c\n", palabra,strlen(palabra),tolower(palabra[i]),toupper(palabra[i]));
	
		i++;
	}

	printf("El texto tiene %d palabras\n",i); 

	int count = 0;
//	for (int i = 0, i < strlen(palabra);i++) {
	//	if (strlen(palabra[i]) > count) {
	//		count = strlen(palabra[i]);
		
	//	}

		
//	}
	
	


	return 0;
}
