#include <stdio.h>


int main () {
    
    float x[142], y[142];

    for (int i = 0;i<142;i++) {

        scanf("%f %f", &x[i], &y[i]);

    }

    FILE *file;
    file = fopen("poligonos.txt", "r");
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

            printf("%f %f ",x[value-1]*35.8, y[value-1]*35.8);
        }
        printf("\n");
    }
    // printf("%f",x[141]);
    fclose(file);

    return 0;
}