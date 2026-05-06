#include <stdio.h>

int main() {

    char l;
    int num, ancho, alto, escala;

    // Lectura del encabezado PPM (P3)
    scanf("%c%d\n%d %d\n%d", &l, &num, &ancho, &alto, &escala);

    // Matrices correctamente declaradas
    int R[alto][ancho], G[alto][ancho], B[alto][ancho];
    int Rt[ancho][alto], Gt[ancho][alto], Bt[ancho][alto];

    // Leer la imagen
    for (int i = 0; i < alto; i++) {
        for (int k = 0; k < ancho; k++) {
            scanf("%d %d %d", &R[i][k], &G[i][k], &B[i][k]);
        }
    }

    // Nueva cabecera (dimensiones invertidas)
    printf("%c%d\n%d %d\n%d\n", l, num, alto, ancho, escala);

    // Transponer
    for (int i = 0; i < alto; i++) {
        for (int k = 0; k < ancho; k++) {
            Rt[k][i] = R[i][k];
            Gt[k][i] = G[i][k];
            Bt[k][i] = B[i][k];
        }
    }

    // Imprimir la imagen transpuesta
    for (int i = 0; i < ancho; i++) {
        for (int k = 0; k < alto; k++) {
            printf("%d %d %d ", Rt[i][k], Gt[i][k], Bt[i][k]);
        }
        putchar('\n');
    }

    return 0;
}