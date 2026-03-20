#include<stdlib.h>
#include<time.h>
#include<stdio.h>



int main() {
	srand(time(NULL));


	int n;
	
	n = rand()%90 + 10;
	printf("%d %d\n",n, n%2 );



	return 0;
}
