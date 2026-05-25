#include<stdio.h>




int main() {

	int i;
	printf("%d\n",i);
	int *ap;
	ap = &i;
	for(*ap = 0; *ap < 20; (*ap)++) {
		printf("%d ",i );
	}



	return 0;
}
