#include<stdio.h>

int main() {

	printf("P3\n500 300\n255\n");
	
	int i;
	int a;
	
	for(a=0;150>a;a++){	
		int b;
		for(b=0;b<a;b++){
			printf("255 0 255 ");
		}
		for(i=a;500>i;i++){
			printf("255 255 0 ");
		}
		putchar('\n');
	}

	for(a=150;a>0;a--){	
		int b;
		for(b=0;b<a;b++){
			printf("255 0 255 ");
		}
		for(i=a;500>i;i++){
			printf("0 255 0 ");
		}
		putchar('\n');
	}
	return 0;
}
	

