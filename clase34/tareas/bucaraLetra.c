#include<stdio.h>


void BuscarLetras(char letra);

int main() {
    
    BuscarLetras('d');

    return 0;
}


void BuscarLetras(char letra) {
    
    char c;
    int count = 0;
    while ( (c = getchar()) != EOF) {
        if (c == letra) count++;
        
    }
    printf("El numero de letras %c es %d\n",letra,count);

}