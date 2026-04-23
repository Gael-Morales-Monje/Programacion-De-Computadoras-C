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
        float promX = 0, promY = 0;

        for (int i = 0; i < n; i++) {
            scanf("%f %f", &x, &y);
            cx[i] = x;
            cy[i] = y;
            promX += x;
            promY += y;

        }
        promX /= n;
        promY /= n;

        for (int i = 0; i < n ; i++) {
            printf("%f,%f ", cx[i]-promX, cy[i]-promY);


        }

        printf("'/>\n");

        int time = rand() % 9 + 5;

        printf("<animateMotion dur='%ds' repeatCount='1' fill='freeze' path='M", time);
        for (int i = 0; i < 10 ; i++) {
            int x = rand() %801 + 100;
            int y = rand() %801 + 100;
            printf("%d,%d ", x, y);
        }
        printf("%f,%f ", promX, promY);

        printf("'></animateMotion>\n");

        int rad = rand() %9 + 2;
        printf("<circle  r='%d' fill='rgb(%d,%d,%d)'>\n", rad, rand() % 256, rand() % 256, rand() % 256);
        printf("<animateMotion dur='10s' repeatCount='indefinite' path='M");
        for (int i = 0; i < n; i++) {
            printf("%f,%f ", cx[i]-promX, cy[i]-promY);
        }
        printf("z'></animateMotion></circle>\n");

        printf("</g>\n");

    }
    printf("</svg>\n");
    return 0;
} 