#include<stdio.h>



int main() {

	
	int x = 1, y =3, z[10];

	printf("%p %p %p\n",(void *)&x,(void *)&y,(void *)&z[0]);

	int *ip;

	ip = &x;

	y = *ip;

	*ip = 0;
	ip = &z[0];

	printf("%d %d %p\n",x,y,ip);
	
	*ip = 100;

	return 0;
}
