#include<stdio.h>



int main() {


	FILE *af;

	char Nombre[60];
	
	scanf("%s",Nombre);


	af = fopen("Arc.txt","w");
	fprintf(af,"%s",Nombre);
	fclose(af);
			

}
