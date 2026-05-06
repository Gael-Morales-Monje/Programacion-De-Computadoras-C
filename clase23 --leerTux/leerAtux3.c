#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main() {


	srand(time(NULL));
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
	

	for(f=alto;f>=0;f--){
		for(c=ancho;c>=0; c--){
/*			if (Mr[f][c]<50 && Mv[f][c]<50){
				printf("%d %d %d ",rand()%256,rand()%256,rand()%256);
				printf("%d %d %d ",255,0,0);
			} else {*/
				printf("%d %d %d ",Mr[f][c],Mv[f][c],Ma[f][c]);
			//}
		}
	}


	return 0;
}
