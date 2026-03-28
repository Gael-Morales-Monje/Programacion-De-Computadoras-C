#include<stdio.h>



int main () {

	int a[10];

	for(int i = 0;i<10;i++) {
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
	}

	printf("-------");

	for (int i = 10;i>=0;i--){
		printf("%d ",a[i]);
	}


	return 0;
}
