#include<stdio.h>
#include<string.h>



int main () {

	int i;
	char palabra[25];
	for (i = 0; scanf("%s",palabra)==1; i++) {
		printf("%s %ld\n",palabra,strlen(palabra));
	}



	return 0;
}
