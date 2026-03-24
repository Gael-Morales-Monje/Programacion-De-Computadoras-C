#include<stdio.h>
#include<math.h>



int main() {

	
	float x,y,angulo;
	
	x=0;
	for (angulo=0;angulo<4*3.1416;angulo=angulo+0.1){
		y=cos(angulo);
		printf("%.3f,%.3f \n",x,y);
		x=x+1;
	}
	
	return 0;
}
