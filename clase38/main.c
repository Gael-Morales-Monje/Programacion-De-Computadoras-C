#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(int argc, char *argv[]) {
	
	srand(time(NULL));

	FILE *ap = fopen(argv[1],"a");
	
	for(int i = 0; i < 50; i++ ) {
	

		fprintf(ap,"%d ", rand()%500);
	}
	
	fclose(ap);


	return 0;
}
