#include<stdio.h>


void operadores(int a, int b,float *sum,float *res,float *mul,float*div, float*mod);
int main() {

	int a,b;
	float sum,res,mul,div,mod;
	scanf("%d %d",&a,&b);


	operadores(a,b,&sum,&res,&mul,&div,&mod);
	

	printf("%d + %d = %f\n",a,b,sum);
	printf("%d - %d = %f\n",a,b,res);
	printf("%d * %d = %f\n",a,b,mul);
	printf("%d / %d = %f\n",a,b,div);
	printf("%d mod %d = %f\n",a,b,mod);

}
void operadores(int a, int b,float *sum,float *res,float *mul,float*div, float*mod){
	*sum = a+b;
	*res = a-b;
	*mul = a*b;
	*div = a/b;
	*mod = a%b;
}
