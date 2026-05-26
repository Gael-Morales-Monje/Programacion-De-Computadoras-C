
#include<stdio.h>



void buscarP(char P[]);


int main () {

    // char P[100];

    // scanf("%s",P);

    buscarP("Los");

    return 0;
}



void buscarP(char P[]) {

    char c;
	int i = 0;
    int n = 0;
	while((c = getchar())!= EOF) {
        
        if (c == P[0]) {
            for(int i = 1; i < 3;i++) {
                c = getchar()
                if(c == P[i]) 
            }
        }
	}
	
    printf("%d\n",n);

}