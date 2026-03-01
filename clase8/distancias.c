#include<stdio.h>
#include<math.h>


int main() {

	char a,b,c,d,e; 
	
	
	scanf("%c", &a);

	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10; 
	
	
	
	scanf("%d %d %c",&num1,&num2,&b);

	scanf("%d %d %c",&num3,&num4, &c);
	scanf("%d %d %c",&num5,&num6,&d);
	scanf("%d %d %c",&num7,&num8,&e);
	scanf("%d %d",&num9,&num10);

	float Dab;
	
	Dab = sqrt((num1-num3)*(num1-num3)+(num4-num2)*(num4-num2));

	float Dbc;

	Dbc = sqrt((num3-num5)*(num3-num5)+(num6-num4)*(num6-num4));


	float Dcd;

	Dcd = sqrt((num5-num7)*(num5-num7)+(num6-num8)*(num6-num8));


	float Dde;
 
	Dde = sqrt((num9-num7)*(num9-num7)+(num8-num10)*(num8-num10));

	float Dea;

	Dea= sqrt((num1-num9)*(num1-num9)+(num2-num10)*(num2-num10));


	printf("%c (%d,%d)\n",a, num1, num2);
	printf("%c (%d,%d)\n",b, num3, num4);
	printf("%c (%d,%d)\n",c, num5, num6);
	printf("%c (%d,%d)\n",d, num7, num8);
	printf("%c (%d,%d)\n",e, num9, num10);


	printf("Dab %f\n",Dab);
	printf("Dbc %f\n",Dbc);
	printf("Dcd %f\n",Dcd);
	printf("Dde %f\n",Dde);
	printf("Dea %f\n",Dea);


	return 0;
};
