#include<stdio.h>


void BuscarLetra(char letra);

int main() {
    
    BuscarLetra('a');

    return 0;
}


void BuscarLetra(char letra) {
    
    char c;
    int n = 0;
    while ( (c = getchar()) != EOF) {
        if (c == letra) {
            n = 1;
            break;
        }
    }
    printf("%d\n",n);

}