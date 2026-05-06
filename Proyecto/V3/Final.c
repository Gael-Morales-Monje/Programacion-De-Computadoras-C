#include<stdio.h>
#include<time.h>
#include<stdlib.h>




void IniciarSVG();
void TerminarSVG();


int main() {
    srand(time(NULL));


    printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg' fill='white'>\n");
    int n;
    for(int i = 0; i<66;i++) {

        char search[50];
        scanf("%s",search);
        scanf("%d", &n);
        int r,g,b;
        r = rand() % 256;
        g = rand() % 256;
        b = rand() % 256;

        // printf("<a href='https://google.com/search?q=%s'>\n",search);
        printf("<a href='https://www.youtube.com/results?search_query=%s'>\n",search);
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

        
        
        float xp= 0 , yp =0;
        for (int i = 0; i<n; i++){
            xp += cx[i];
            yp += cy[i];
        }
        xp /= n;
        yp /= n;

        printf("<text x='%f' y='%f' font-size='10' text-anchor='middle'>%s</text>\n",xp,yp,search);

        int volado = rand() % 2;
        int nCircles = rand() %11 + 10;
        int r2, g2, b2;
        r2 = rand() % 256;
        g2 = rand() % 256;
        b2 = rand() % 256;

        if (volado == 0) { 

            float begin = 0;
            for(int i = 0; i < nCircles; i++){
                printf("<circle r='5' fill='rgb(%d,%d,%d)'><animateMotion dur='10s' begin='%fs' repeatCount='indefinite' path='M", r2, g2, b2, begin);
                for(int i = 0; i < n; i++){
                    printf("%f,%f ", cx[i], cy[i]);
                }
                printf("z'></animateMotion></circle>\n");
                begin++;
            }
        } else  {
            float begin = 0;
            for(int i = 0; i < nCircles; i++){
                // int radio = rand() % 7 + 1;
                printf("<circle r='5' fill='rgb(%d,%d,%d)'><animateMotion dur='10s' begin='%fs' repeatCount='indefinite' path='M", r2, g2, b2, begin);
                for(int i = n-1; i >= 0; i--){
                    printf("%f,%f ", cx[i], cy[i]);
                }
                printf("z'></animateMotion></circle>\n");
                begin++;
            }

        }
        printf("</a>");
        


    }

    printf("<text x='20' y='20'>Gael Morales Monje, 2216044x</text>");
    printf("</svg>\n");
    return 0;
} 