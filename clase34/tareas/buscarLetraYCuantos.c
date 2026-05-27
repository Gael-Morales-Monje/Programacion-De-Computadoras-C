#include<stdio.h>


void NumeroLetra(char letra);

int main() {
    
    NumeroLetra('a');

    return 0;
}


void NumeroLetra(char letra) {
    
    char c;
    int count = 0;
    while ( (c = getchar()) != EOF) {
        if (c == letra) {
            count++;
        }
    }
    printf("%d\n",count);

}