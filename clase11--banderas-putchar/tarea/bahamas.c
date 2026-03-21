#include<stdio.h>


int main()
{
    printf("P3\n540 270\n255\n");


    int y;

    for (y=0; y<90; y++){
        int x;
        for (x=0; x<y*2 ; x++) {
            printf("000 000 000 ");
        }

        for (x=y*2; x<540; x++) {
            printf("000 119 139 ");

        }

    }
    for (y=0; y<45;y++){

        int x;
        for (x=0; x<180; x++) {
            printf("000 000 000 ");
        }

        for (x=180; x < y*2+180; x++) {
            printf("000 000 000 ");
        }

        for (x = y*2+180; x<540;x++) {
            printf("255 205 000 ");

        }
        
    }
    

    for (y=0; y<45;y++){

        int x;
        for (x=270; x>y*2; x--) {
            printf("000 000 000 ");
        }
        for (x = 270-y*2; x<540;x++) {
            printf("255 205 000 ");

        }
        
    }
    for (y=0;y<90;y++) {
        int x;
        for (x=180; x>y*2; x--) {
            printf("000 000 000 ");
        }
        for (x=180-y*2; x<540; x++) {
            printf("000 119 139 ");
        }

    }



    return 0;
}