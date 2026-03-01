#include <stdio.h>
#include <math.h>

int main() {
	
	float n, n2, n3, n4;

	scanf("%f",&n);

	scanf("%f",&n2);
	scanf("%f",&n3);
	scanf("%f",&n4);
	

	float d;

	d = sqrt((n3-n)*(n3-n) + (n4-n2)*(n4-n2));
	


	printf("%f %f %f %f \n",n,n2,n3,n4);
	printf("%f",d);






	
	return 0;

};
