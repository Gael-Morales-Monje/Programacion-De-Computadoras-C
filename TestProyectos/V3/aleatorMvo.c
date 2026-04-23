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
        printf("<g>\n");
        printf("<polygon stroke='rgb(%d,%d,%d)' stroke-width='1' fill='rgb(%d,%d,%d)' points='", r, g, b, b,g,r);
        float x, y;
        float cx[n], cy[n];

        for (int i = 0; i < n; i++) {
            scanf("%f %f", &x, &y);
            cx[i] = x;
            cy[i] = y;
            printf("%f,%f ", x, y);
        }
        printf("'/>\n");

        printf("<animateMotion dur='10s' repeatCount='1' path='M");
        for (int i = 0; i < 10 ; i++) {
            int x = rand() %1001 - 500;
            int y = rand() %1001 - 500;
            printf("%d,%d ", x, y);
        }
        printf("0,0 ");

        printf("'></animateMotion>\n");
        printf("</g>\n");

    }
    printf("</svg>\n");
    return 0;
} 