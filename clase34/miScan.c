#include<stdio.h>


#define MAX 10000


void LeerP(char p[MAX]);


void LeerPalabraApunta(char *ap);


void LeerRenglon(char *ap);
void LeerParrafo(char *ap);



void LeerLibro(char *ap);


void Findletra();


int main() {

	char Text[MAX];
	printf("%s\n",Text);
	/*
	LeerPalabraApunta(Text);
	printf("%s\n",Text);

	LeerRenglon(Text);
	LeerParrafo(Text);
	LeerS(Text);
	printf("%s\n",Text);*/

	LeerLibro(Text);
	printf("%s\n",Text);


	return 0;
}



void LeerLibro(char *ap){
	char c;

	while ((c = getchar()) != EOF) {
		*ap = c;
		ap++;
	}
	*ap = '\0';

}



void LeerParrafo(char *ap){
	char c;

	while(1){
		c = getchar();
		if (c == '.'){
			*ap = c;
			c = getchar();
			if (c == '\n') {
				ap++;
				*ap = '\0';
				return;
			}
		} else {
			*ap = c;	
			ap++;
		}
	
	}

}


void LeerRenglon(char *ap){
	char c;
	while( (c = getchar()) != '\n'){
		*ap = c;
		ap++;
	}
	*ap = '\0';


}


void LeerP(char p[MAX]){
	char c;
	int i = 0;
	while((c = getchar())!= ' ') {
		p[i] = c; 
		i++;
	}
	p[i] = '\0';
}



void LeerPalabraApunta(char *ap) {

	char c;
	while((c = getchar())!= ' ') {
		*ap = c; 
		ap++;
	}
	*ap = '\0';

}










