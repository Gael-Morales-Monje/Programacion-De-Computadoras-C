#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
    srand(time(NULL));


    printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
    int n;
    for(int i = 0; i<56;i++) {
        scanf("%d", &n);
        int r,g,b;
        r = rand() % 256;
        g = rand() % 256;
        b = rand() % 256;
        printf("<polygon stroke='rgb(%d,%d,%d)' stroke-width='3' fill='rgb(%d,%d,%d)' points='", r, g, b, b,g,r);
        for (int i = 0; i < n; i++) {
            float x, y;
            scanf("%f %f", &x, &y);
            printf("%f,%f ", x*35.8, y*35.8);
        }
        printf("'/>\n");
    }
    printf("</svg>\n");
    return 0;
} 