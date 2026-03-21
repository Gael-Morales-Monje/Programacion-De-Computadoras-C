#include<stdio.h>
#include<math.h>



int main() {
	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
	
	printf("<circle r='25' fill='lime'>\n");

	printf("<animateMotion dur='10s' repeatCount='indefinite' path='M");

	float x,y,angulo;
	
	x=0;
	for (angulo=0;angulo<4*3.1416;angulo=angulo+0.1){
		y=cos(angulo);
		printf("%.3f,%.3f ",x,y);
		x=x+1;
	}

	printf(" z'></animateMotion></circle>\n");

	printf("</svg>\n");
	
	return 0;
}
