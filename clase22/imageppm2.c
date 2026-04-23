#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main () {
	
	srand(time(NULL));


	//introducion a Matrices en C
	//Primera aplicacion generacion de imagenes en ppm 
	

	printf("P3\n 200 100\n255\n");
	
	int Mr[100][200];
	int Mg[100][200];
	int Mb[100][200];
	int r,c;


	for(r = 0; r < 100;r++){
		for(c=0;c<200;c++){
			Mr[r][c] = rand()%256;
			Mg[r][c] = rand()%256;
			Mb[r][c] = rand()%56;
		}
	}

	
	for(r = 0; r < 100;r++){
		for(c=0;c<200;c++){
			printf("%d ",Mg[r][c]);
			printf("%d ",Mb[r][c]);
			printf("%d ",Mr[r][c]);
		}
		printf("\n");
	}

	

	return 0;
}
