#include<stdio.h>


int main() {
//dibujo de triangulo de bandera de czechoslovaki
//llenando huecos para poder hacer una bandera
//
//
//




	int super;

	for(super=1;15>=super;super++){
		int range;
		for(range = 0;range < super;range++) {
			printf("*");
		};
		
		for(range=super;range<40;range++){
			printf("+");
		};

		printf("\n");
	};	
	for (super=15;super>=0;super--){
		int range;
		for(range = 0;range < super;range++) {
			printf("*");
		};
		for(range = super;range<40;range++){
			printf("#");
		};
		printf("\n");
	};

	return 0;
}
