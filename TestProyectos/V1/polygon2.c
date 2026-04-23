#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
    // srand(time(NULL));


    printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
    int n;

    

    for(int i = 0; i<66;i++) {
        scanf("%d", &n);
        
        printf("<polygon stroke='black' stroke-width='1' fill='white' points='");
        float x, y;

        for (int i = 0; i < n; i++) {
            scanf("%f %f", &x, &y);
            printf("%f,%f ", x*35.8, y*35.8);
        }
        printf("'/>\n");
        // printf("<text x='%f' y='%f' font-size='20' fill='black'>%d</text>\n", x*35.8, y*35.8, i+1);
    }
    printf("</svg>\n");
    return 0;
} 