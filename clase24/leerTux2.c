#include<stdio.h>




int main () {
//	srand(time(NULL));
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


        int Mrt[ancho][alto],Mvt[ancho][alto],Mat[ancho][alto];
        for(f=0;f<alto;f++){
                for(c=0; c<ancho; c++){
                        Mrt[c][f] = Mr[f][c];
                        Mvt[c][f] = Mv[f][c];
                        Mat[c][f] = Ma[f][c];
                }
        }



	
        int Mrt2[ancho][alto],Mvt2[ancho][alto],Mat2[ancho][alto];

        for(f=0;f<alto;f++){
                for(c=0; c<ancho; c++){
                        Mrt2[c][f] = Mrt[f][c];
                        Mvt2[c][f] = Mvt[f][c];
                        Mat2[c][f] = Mat[f][c];
                }
        }

        for(f=0;f<alto;f++){
                for(c=0; c<ancho; c++){
                        printf("%d %d %d ",Mrt2[f][c],Mvt2[f][c],Mat2[f][c]);
                }
        }

	
	
	return 0;

}
