#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include "svg.h"

void recusivaCirculos(int cx,int cy,int r,int nivel);
void recusivaFractal(int cx,int cy,int r,int nivel);

int main () {
    srand(time(NULL));


    int nivel; scanf("%d",&nivel);

    IniciarSVG();

    recusivaFractal(500,500,350,nivel);
    TerminarSVG();
    return 0;
}
void recusivaFractal(int cx,int cy,int r,int nivel) {
    if (nivel == 0) {
        return;
    } else {
        recusivaCirculos(cx,cy,r,1);
        recusivaFractal(cx+r/2,cy,r/2,nivel-1);
        recusivaFractal(cx-r/2,cy,r/2,nivel-1);
    }



}

void recusivaCirculos(int cx,int cy,int r,int nivel) {
    if (nivel == 0) {
        return;
    } else {
        DibujarCirculoSinRelleno(cx,cy,r,rand()%256,rand()%256,rand()%256);
        recusivaCirculos(cx,cy,r*0.9,nivel-1);
    }


}