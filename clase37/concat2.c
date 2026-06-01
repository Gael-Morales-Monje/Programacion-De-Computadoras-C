#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {

	char arregloLetras[1000];

	int x = atoi(argv[3]);
	
	FILE *apA = fopen(argv[2],"a");

	fprintf(apA,"%s\t%s\n",argv[1],argv[3]);
	fclose(apA);
	sprintf(arregloLetras,"gedit %s",argv[2]);
	system(arregloLetras);

	return 0;
}
