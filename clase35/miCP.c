#include<stdio.h>




int main(int argc, char *argv[]) {

	//char ArcEntrada[100], ArcSalida[100];
	

	//scanf("%s %s",ArcEntrada,ArcSalida);

	FILE *apEN, *apSal;

	apEN = fopen(argv[1],"r");
	apSal = fopen(argv[2],"w" );
	char c;


	while ( fscanf(apEN,"%c",&c) == 1 ) {
		fprintf(apSal,"%c",c);
	
	}


	fclose(apEN);
	fclose(apSal);

	


	return 0;
}
