
#include<stdio.h>
#include <string.h>


void buscarP(char P[]);


int main () {

    buscarP("que");

    return 0;
}



void buscarP(char P[]) {

    char c;
	int i = 0;
    
    int k = 0;
	while((c = getchar())!= EOF) {
        
        if (c == ' ') {
            int n = 0;
            for(int i = 0; i < strlen(P);i++) {
                c = getchar();
                if(c == P[i]) n++;
                else break;
            }

            if (n == strlen(P) && (c=getchar()) == ' ') {
                k++;
                n = 1;
            }
        }
	}
	
    printf("%d\n",k);

}