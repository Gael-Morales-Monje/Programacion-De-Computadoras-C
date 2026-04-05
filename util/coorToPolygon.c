#include <stdio.h>


int main () {
    
    float x[111], y[111];

    for (int i = 0;i<111;i++) {

        scanf("%f %f", &x[i], &y[i]);

    }

    FILE *file;
    file = fopen("../CoordenadasYPuntos/poligonos.txt", "r");
    int lines = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    if (ch != '\n' && lines != '\0') {
        lines++;
    }

    rewind(file);

    for(int i = 0; i<lines;i++) {
        int n;
        fscanf(file, "%d", &n);
        printf("%d ",n);
        for (int j = 0; j<n; j++) {
            int value;
            fscanf(file, " %d", &value);

            printf("%f %f ",x[value-1], y[value-1]);
        }
        printf("\n");
    }

    fclose(file);

    return 0;
}