#include<stdio.h>


int main()
{
    printf("P3\n200 100\n255\n");


    int y;
    for (y = 0; y < 9; y++) {
        int x = 0;

        for (x = 0; x < 18; x++) {
                printf("255 205 000 ");
            }
        int b=y*2+18;

        for (x = 0; x + 18 < b; x++){
            printf("255 205 000 ");
        }
        
        for (x = b; x < 100; x++)
        {
            printf("000 151 057 ");
        }

        int c = 82-y*2;
        for (x = 0; x < c; x++){
            printf("000 151 057 ");
        }
        for (x = c; x < 90; x++){
            printf("255 205 000 ");
        }
        for (x = 0; x < 10; x++){
            printf("255 205 000 ");
        }
        
        
    }

    for (y = 0; y < 32; y++) {
        int x;

        int a = y*2;
        for (x=0; x < a; x++){
            printf("000 000 000 ");
        }
        for (x = a; x < a+36; x++){
            printf("255 205 000 ");
        }
        for (x = a+36; x < 100; x++){
            printf("000 151 057 ");
        }

        
        for (x = 64; x > a; x--){
            printf("000 151 057 ");
        }

        
        for (x = 64-a ; x < 100-a; x++){
            printf("255 205 000 ");
        }

        for (x = 100-a ; x < 100; x++){
            printf("000 000 000 ");
        }
        
    }
    

    for (y = 0; y < 9; y++) {
        int x;
        int a = y*2;
        // for(x= 0; x < 100; x++){
        //     printf("000 000 000 ");
        // }

        for (x = 0; x < 64; x++)
        {
            printf("000 000 000 ");
        }
        
        for (x = 64; x < a+64; x++)
        {
            printf("000 000 000 ");
        }
        for (x = a+64; x < 100; x++)
        {
            printf("255 205 000 ");
        }


        for (x = 36; x > a; x--){
            printf("255 205 000 ");
        }
        for (x = 36-a; x < 100; x++){
            printf("000 000 000 ");
        }

    }
    
    for (y = 0; y< 9; y++) {
        int x;
        int a = y*2;
        for (x=82; x > a; x--) {
            printf("000 000 000 ");
        }
        for (x=82-a; x<100; x++) {
            printf("255 205 000 ");

        }
    
        for (x=0;x<18;x++){
            printf("255 205 000 ");

        }

        for (x=18; x<a+18; x++) {
            printf("255 205 000 ");
        }

        for (x=a+18;x<100;x++) {
            printf("000 000 000 ");

        }
    }



    for (y=0; y<32;y++) {
        int x;
        int a = y*2;
        for (x=64; x>a ; x--) {
            printf("000 000 000 ");
        }
        
        for (x=64-a;x<100-a;x++) {
            printf("255 205 000 ");
        }


        for (x=100-a ;x<100 ;x++) {
            printf("000 151 057 ");

        }

        for (x=0; x<a;x++) {
            printf("000 151 057 ");
        }

        for (x=a; x<a+36; x++) {
            printf("255 205 000 ");
        }
        for(x=a+36; x<100 ;x++) {
            printf("000 000 000 ");
        }        
    }

    for (y=0; y<9; y++) {
        int x;

        int a = y*2;
        for (x=36;x>a;x--) {
            printf("255 205 000 ");
        }
        for (x=36-a; x<100; x++) {
            printf("000 151 057 ");
        }



        for (x=0;x<64;x++){
            printf("000 151 057 ");
        }

        for (x=64; x<a+64; x++) {
            printf("000 151 057 ");
        }

        for (x=a+64; x<100;x++){
            printf("255 205 000 ");
        }
        // for (x=0;x<100;x++){
        //     printf("000 151 057 ");
        // }

    }

    return 0;
}