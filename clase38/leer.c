#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(int argc,char *argv[]) {
	
	srand(time(NULL));

	FILE *ap = fopen(argv[1],"r");

	int Values[50];
	int i = 0;
	while (fscanf(ap,"%d",&Values[49-i]) == 1){

		printf("%d ", Values[49-i]);
		i++;
	}


	
	fclose(ap);


	return 0;
}
