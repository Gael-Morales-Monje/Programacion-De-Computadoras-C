#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void imprimeRenglon(int ancho,int r,int g,int b);

int main() {
	
	srand(time(NULL));

	int alto,ancho,r,g,b;


	scanf("%d %d %d %d %d",&alto,&ancho,&r,&g,&b);

	printf("P3\n%d %d\n255\n",ancho,alto);
			
	int j = 1;
	
	while(j<=alto){
		if (j%2 == 0 ){
			imprimeRenglon(ancho,rand()%256,rand()%256,rand()%256);
		} else {
			imprimeRenglon(ancho,r,g,b);
		}
		j++;
	}

	return 0;

}


void imprimeRenglon(int ancho,int r,int g,int b){
	int i;
	for(i = 0;i< ancho; i++) printf("%d %d %d ",r,g,b);

}
