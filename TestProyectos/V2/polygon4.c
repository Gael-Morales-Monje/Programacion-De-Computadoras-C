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

        int volado = rand() % 2;

        if (volado == 0) { 

            float begin = 0;
            for(int i = 0; i < 50; i++){
                int r2, g2, b2;
                r2 = rand() % 256;
                g2 = rand() % 256;
                b2 = rand() % 256;


                // int radio = rand() % 7 + 1;
                printf("<circle r='5' fill='rgb(%d,%d,%d)'><animateMotion dur='10s' begin='%fs' repeatCount='indefinite' path='M", r2, g2, b2, begin);
                for(int i = 0; i < n; i++){
                    printf("%f,%f ", cx[i], cy[i]);
                }
                printf("z'></animateMotion></circle>\n");
                begin++;
            }
        } else if (volado == 1) {
            float begin = 0;
            for(int i = 0; i < 50; i++){
                int r2, g2, b2;
                r2 = rand() % 256;
                g2 = rand() % 256;
                b2 = rand() % 256;


                // int radio = rand() % 7 + 1;
                printf("<circle r='5' fill='rgb(%d,%d,%d)'><animateMotion dur='10s' begin='%fs' repeatCount='indefinite' path='M", r2, g2, b2, begin);
                for(int i = n-1; i >= 0; i--){
                    printf("%f,%f ", cx[i], cy[i]);
                }
                printf("z'></animateMotion></circle>\n");
                begin++;
            }

        }
        


    }
    printf("</svg>\n");
    return 0;
} 