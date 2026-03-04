#include<stdio.h>


int main() {
	
	printf("P3\n");

	printf("300 200\n");

	printf("255\n");





	
	int parte1;
	for(parte1=0;100>parte1;parte1++){
		int amarilla;
		for(amarilla=0;300>amarilla;amarilla++){
			printf("255 255 0 "); 
		};
	};


	int parte2;
	for(parte2=0;50>parte2;parte2++){
		int azul;
		for(azul=0;300>azul;azul++){
			printf("0 0 255 "); 
		};
	};

	int parte3;
	for(parte3=0;50>parte3;parte3++){
		int rojo;
		for(rojo=0;300>rojo;rojo++){
			printf("255 0 0 "); 
		};
	};

	return 0;
};
