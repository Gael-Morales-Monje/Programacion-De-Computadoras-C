#include<stdio.h>


int main() {
    int alto, ancho;
    scanf("%d %d",&alto,&ancho);
    int f,c,m[alto][ancho];
    

    for(f = 0 ; f < alto;f++){
        for(c = 0; c < ancho; c++){
            scanf("%d",&m[f][c]);
            // printf("%d ",m[f][c]);
        }
    }
    
    // -----------------------------------
    int mt[alto][ancho];
    for(f = 0 ; f <alto;f++){
        for(c = 0; c < ancho; c++){
            mt[c][f] = m[f][c];
        }
    }
    // -----------------------------------

    printf("%d %d---\n",alto,ancho);

    for(f = 0 ; f <alto;f++){
        for(c = 0; c < ancho; c++){
            printf("%d ",m[f][c]);
        }
        putchar('\n');
    }

    printf("%d %d---\n",alto,ancho);


    for(f = 0 ; f <alto;f++){
        for(c = 0; c < ancho; c++){
            printf("%d ",mt[f][c]);
        }
        putchar('\n');
    }


    return 0;
}