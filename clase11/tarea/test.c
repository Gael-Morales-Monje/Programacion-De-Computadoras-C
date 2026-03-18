#include<stdio.h>



int main()
{
    printf("P3\n200 100\n255\n");


    
    
    for (int i = 1; i <= 9; i++)
    {   
        int x;
        int a = i*2;

        // for (x = 0; x < 36; x++)
        // {
        //     printf("000 000 255 ");
        // }
        
        
        for (x = 26; x < a+36; x++)
        {
            printf("000 000 255 ");
        }
        for (x = a+36; x < 100; x++)
        {
            printf("255 205 000 ");
        }
        

        for (x= 0; x<100; x++)
            {
                printf("000 000 000 ");
            }



        // for (x = 36; x > a; x--){
        //     printf("255 205 000 ");
        // }
        // for (x = 36-a; x < 100; x++){
        //     printf("000 000 000 ");
        // }
        

    }
    
    
    return 0;


}