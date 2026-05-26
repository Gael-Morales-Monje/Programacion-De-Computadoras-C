#include<stdio.h>




int main() {


	FILE *ap;


	ap = fopen("Dat.dat","r");

	int var;

	fscanf(ap,"%d",&var);
	
	printf("%d\n",var);

	fclose(ap);

	return 0;
}
