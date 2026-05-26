#include<stdio.h>

#define MAX 10000

void LeerP(char p[MAX],char a);


int main() {


    char P[MAX];

    LeerP(P,'a');


    return 0;
}



void LeerP(char p[MAX], char a){
	char c;
	int i = 0;
    int n = 0;
	while((c = getchar())!= ' ') {
        if (c == a) { n = 1; }  
		p[i] = c; 
		i++;
	}
	p[i] = '\0';
    printf("%d\n",n);
}