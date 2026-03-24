#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main () {
	
	srand(time(NULL));
	
	int n = rand()%2;

	if(n == 1) {
		printf("Sol\n");
	
	}
       	else {
		printf("Aguila\n");
	}

	return 0;

}
