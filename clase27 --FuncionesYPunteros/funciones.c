#include<stdio.h>



void suma(int a,int b, int resultado);
void sumaV2(int a,int b, int *resultado);
int sumaV3(int a,int b);
int main() {

	
	int num1,num2,r;

	scanf("%d %d",&num1,&num2);

	suma(num1,num2,r);
	printf("%d + %d = %d\n",num1,num2,r);

	sumaV2(num1,num2,&r);
	printf("%d + %d = %d\n",num1,num2,r);
	
	r = sumaV3(num1,num2);
	printf("%d + %d = %d\n",num1,num2,r);

	return 0;
}



void suma(int a,int b, int resultado) {
	resultado = a + b;
}



void sumaV2(int a,int b, int *resultado) {
	*resultado = a + b;
}


int sumaV3(int a,int b) {
	return a + b;

}
