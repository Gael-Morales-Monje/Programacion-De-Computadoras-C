#include<stdio.h>


int main() {
//dibujo de triangulo de bandera de cuba


	int super;

	for(super=1;10>=super;super++){
		int range;
		for(range = 0;range < super;range++) {
			printf("*");
		};
		printf("\n");
	};	

	for (super=10;super>=0;super--){
		int range;
		for(range = 0;range < super;range++) {
			printf("*");
		};
		printf("\n");
	};

	return 0;
}





