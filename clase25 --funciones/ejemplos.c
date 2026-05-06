#include<stdio.h>


void imprimekveces(int k);

void imprimekvecesv2(int k, char c);

int potencia(int b, int n);

int main () {


	int n = 4;

	imprimekveces(n);
	
	imprimekvecesv2(n,'L');
	int r = potencia(2,n);
	printf("%d\n",r);
	return 0;
}


void imprimekveces(int k) {
	for(int i = 0;i < k; i++){
		putchar('A');
	}
}

void imprimekvecesv2(int k, char c){
	for(int i = 0;i < k; i++){
		putchar(c);
	}
}



int potencia(int b, int n){
	int value = b;
	for(int i = 1;i< n; i++){
		value *= b;
	}

	return value;
}


