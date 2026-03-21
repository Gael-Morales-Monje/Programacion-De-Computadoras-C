#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	srand(time(NULL));
	

	for (int i=0;i<10;i++){
		int numAle;
		numAle = rand()%6 +1;
		printf("%d \n",numAle);
	}
	return 0;
}
