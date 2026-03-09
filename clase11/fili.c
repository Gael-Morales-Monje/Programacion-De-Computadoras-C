#include<stdio.h>



int main() {

	printf("P3\n500 300\n255\n");
	

	int x;

	//for(x=0;125>x;x++){
	//	int l;
	//	for(l=0;75>l;l++){
	//		printf("255 255 255 ");
	//	}
	//	for(l=0;50>l;l++) {
	//		printf("0 0 255 ");
	//	
	//	}
	//	for(l=0;375>l;l++){
	//		printf("255 255 255 ");
	//	}
	//	putchar('\n');
	//}

	
	for(x=0;125>x;x++){
		int l;
		for(l=0;75>l;l++){
			printf("255 255 255 ");	
		}	
		for(l=0;50>l;l++){
			printf("0 0 255 ");
		}
		for(l=0;375>l;l++){
			printf("255 255 255 ");
		}
		putchar('\n');
	}
	
	for(x=0;50>x;x++){

		int p;
		for(p=0;500>p;p++){
			printf("0 0 255 ");
		}
	
	}
	for(x=0;125>x;x++){
		int l;
		for(l=0;75>l;l++){
			printf("255 255 255 ");	
		}	
		for(l=0;50>l;l++){
			printf("0 0 255 ");
		}
		for(l=0;375>l;l++){
			printf("255 255 255 ");
		}
		putchar('\n');
	}


	return 0 ;
}
