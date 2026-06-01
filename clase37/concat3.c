#include<stdio.h>
#include<stdlib.h>



int main (int argc, char *argv[]) {
	
	FILE *apA = fopen(argv[3],"w");
	
	for (int k = 0; k < atoi(argv[2]); k ++){
		for (int i = 0; i < atoi(argv[1]); i++) {
			fprintf(apA,"|");
		}
		fprintf(apA,"\n");
	}

	fclose(apA);

	char comand[50];


	sprintf(comand,"cat %s",argv[3]);


	system(comand);
	


	return 0;
}
