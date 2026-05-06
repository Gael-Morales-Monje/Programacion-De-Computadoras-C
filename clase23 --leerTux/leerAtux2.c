#include<stdio.h>





int main() {
	char letra;
	int num, ancho,alto, escala;

	scanf("%c%d %d %d %d",&letra,&num,&ancho,&alto,&escala);

	int Mr[ancho][alto],Mv[ancho][alto],Ma[ancho][alto];
	int f,c;


	for(f=0;f<alto;f++){
		for(c=0; c<ancho; c++){
			scanf("%d %d %d",&Mr[f][c],&Mv[f][c],&Ma[f][c]);
		}
	}

	printf("%c%d\n%d %d\n%d\n",letra,num,ancho,alto,escala);
	

	for(f=0;f<alto;f++){
		for(c=ancho;c>=0; c--){
			printf("%d %d %d ",Mr[f][c],Mv[f][c],Ma[f][c]);
		}
	}


	return 0;
}
