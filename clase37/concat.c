#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {

	char arregloLetras[1000];

	int x = atoi(argv[3]);

	sprintf(arregloLetras,"echo %s %d >> %s\n",argv[1],x,argv[2]);
		

	printf("%s",arregloLetras);

	return 0;
}
