#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main () {
	
	srand(time(NULL));
	

	printf("P2\n 200 100\n255\n");
	
	int Mat[100][200];
	int r,c;


	for(r = 0; r < 100;r++){
		for(c=0;c<200;c++){
			Mat[r][c] = rand()%256;
		}
	}

	
	for(r = 0; r < 100;r++){
		for(c=0;c<200;c++){
			printf("%d ",Mat[r][c]);
		}
		printf("\n");
	}

	

	return 0;
}
