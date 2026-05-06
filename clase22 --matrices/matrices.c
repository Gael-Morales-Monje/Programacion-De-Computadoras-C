#include<stdio.h>



int main() {

	int M;
	scanf("%d",&M);



	int Ma[10];
	
	for(int i = 0; i < 10; i++){
		scanf("%d",&Ma[i]);
	}


	int Mat[3][3]; // arreglo en 2 dimenciones conocido tambien como la estructura matricial
	
	
	int r;


	for(int r = 0; r < 3; r++) {
		for(int i = 0; i < 3; i++){
			scanf("%d",&Mat[r][i]);
		}
	}   
	
	
	printf("%d\n",M);

	for(int i = 0; i < 10; i++){
		printf("%d ",Ma[i]);
	}
	printf("\n");

	for(int r = 0; r < 3; r++) {
		for(int i = 0; i < 3; i++){
			printf("%d ",Mat[r][i]);
		}
		printf("\n");
	}   
	return 0;
}
