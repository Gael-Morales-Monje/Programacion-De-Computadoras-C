#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {
	srand(time(NULL));

	int Ax[100],Ay[100];
	
	for(int i = 0;i<100;i++){
		Ax[i] = rand()%800 + 100;
	}

//	for(int i = 0;i<100;i++){
//		printf("%d ",Ax[i]);
//	}

	for(int i = 0;i<100;i++){
		Ay[i] = rand()%400 + 500;
	}
	

	for(int k = 0; k<100;k++){
		printf("%d,%d ",Ax[k],Ay[k]);
		
	}

	return 0;
}
