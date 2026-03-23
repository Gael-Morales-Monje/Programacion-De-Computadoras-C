#include<stdio.h>

int main() {
	
	

	int c, count;
	

	count = 0;

	for (int i = 0; (c=getchar()) != EOF;i++ ) {
		if(c == '\n'){
			count += 1;
		}
	
	}
	printf("%d\n",count);

	return 0;
}
