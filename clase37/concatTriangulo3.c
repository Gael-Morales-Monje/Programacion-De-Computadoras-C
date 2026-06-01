#include<stdio.h>
#include<stdlib.h>



int main (int argc, char *argv[]) {
	
	FILE *apA = fopen(argv[2],"w");
	
	int n = atoi(argv[1]);

	for (int i = n; i > 0; i--) {
		for(int k = 0; k < i; k++) {
			fprintf(apA,"|");
			
		}
		fprintf(apA,"\n");
	
	}




	for (int k = 1; k <= n; k++){
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
