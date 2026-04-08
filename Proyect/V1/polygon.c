#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
    srand(time(NULL));


    printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg' fill='white'>\n");
    int n;
    for(int i = 0; i<66;i++) {
        scanf("%d", &n);
        int r,g,b;
        r = rand() % 256;
        g = rand() % 256;
        b = rand() % 256;
        printf("<polygon stroke='rgb(%d,%d,%d)' stroke-width='0' fill='rgb(%d,%d,%d)' points='", r, g, b, b,g,r);
        float x, y;
        for (int i = 0; i < n; i++) {
            scanf("%f %f", &x, &y);
            printf("%f,%f ", x*35.8, y*35.8);
        }
        printf("'>%d</polygon>\n", i+1);
        // printf("<text x='%f' y='%f' font-size='20' fill='black'>%d</text>\n", x*35.8, y*35.8, i+1);
    }
    printf("</svg>\n");
    return 0;
} 