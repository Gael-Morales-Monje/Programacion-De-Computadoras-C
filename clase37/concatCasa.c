#include<stdio.h>
#include<stdlib.h>



int main (int argc, char *argv[]) {
	
	FILE *apA = fopen(argv[2],"w");
	
	int n = atoi(argv[1]);

	for (int i = n/2; i > 0; i--) {
		for(int k = 0; k < i-1 ; k++) {
			fprintf(apA," ");	
		}
		for(int j = i-1; j < n/2; j ++){
			fprintf(apA,"|");
		}
		for(int k = 1; k < n/2+1-i; k ++) {
			fprintf(apA,"|");
		}
		

		fprintf(apA,"\n");
			
	}

	for (int i = 0; i < n; i++) {
		for(int k = 0; k < n; k++){
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
