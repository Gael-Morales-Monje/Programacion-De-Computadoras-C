#include<stdio.h>
#include<stdlib.h>



int main (int argc, char *argv[]) {
	
	FILE *apA = fopen(argv[2],"w");
	
	for (int k = atoi(argv[1]); k > 0; k--){
		for (int i = 0; i < k; i++) {
			fprintf(apA,"|");
		}
		fprintf(apA,"\n");
	}

	fclose(apA);

	char comand[50];


	sprintf(comand,"cat %s",argv[2]);


	system(comand);
	


	return 0;
}
