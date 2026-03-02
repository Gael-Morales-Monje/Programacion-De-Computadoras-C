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



	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");

	printf("<circle r='15' fill='lime' >\n");
	printf("<animateMotion dur='10' repeatCount='indefinite' path='M %d,%d,%d,%d,%d,%d,%d,%d,%d,%d Z'></animateMotion>\n",num1,num2,num3,num4,num5,num6,num7,num8,num9,num10);
	printf("</circle>\n");

	printf("<circle r='15' fill='lime' >\n");
	printf("<animateMotion dur='10' repeatCount='indefinite' path='M %d,%d,%d,%d,%d,%d,%d,%d,%d,%d Z'></animateMotion>\n",num9,num10,num7,num8,num5,num6,num3,num4,num1,num2);
	printf("</circle>\n");
	printf("</svg>");




	return 0;
};
