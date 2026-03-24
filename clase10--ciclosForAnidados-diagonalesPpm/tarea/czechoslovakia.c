#include<stdio.h>




int main() {

	printf("P3\n300 200\n255\n");

	
	for(int i = 0;100>i;i++){
		for(int a = 0;i>a; a++){
			printf("0 0 255 ");
		};

		for (int b = i;300>b;b++){
			printf("255 255 255 ");
		};
	};


	for(int i = 100;i>0;i--) {
		for(int a = 0;i>a; a++){
			printf("0 0 255 ");
		};

		for (int b = i;300>b;b++){
			printf("255 0 0 ");
		};
	
	};




//	for(int i=0;200>i;i++){
//		for(int a = 0;300>a;a++) {
//			printf("255 0 250 ");
//		
//		};
//	
//	};


	return 0;
}
