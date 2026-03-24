#include<stdio.h>

int main() {


    printf("P3\n180 110\n255\n");

    int y;
    for (y=0 ; y< 40; y++) {
        int x;
        for (x=0; x<50; x++) {
            printf("255 255 255 ");

        }
        for (x=0; x<30; x++) {
            printf("000 053 128 ");

        } 

        for(x=0; x<100; x++) {
            printf("255 255 255 ");
        }

    }

    for (y=0; y<30; y++) {
        int x;
        for (x= 0; x<180;x++){
            printf("000 053 128 ");

        }

    }

    for (y=0 ; y< 40; y++) {
        int x;
        for (x=0; x<50; x++) {
            printf("255 255 255 ");

        }
        for (x=0; x<30; x++) {
            printf("000 053 128 ");

        } 

        for(x=0; x<100; x++) {
            printf("255 255 255 ");
        }

    }



    return 0;

}