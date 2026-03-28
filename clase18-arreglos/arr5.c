#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {
	srand(time(NULL));
	int Ax[100],Ay[100];
	for(int i = 0;i<100;i++){
		Ax[i] = rand()%800 + 100;
		Ay[i] = rand()%400 + 500;
	}
	

	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
	float b = 0;

	for(int i = 0;i<50;i++){
		printf("<circle r='15' fill='rgb(%d,%d,%d)'>",rand()%256,rand()%256,rand()%256);
		printf("<animateMotion dur='10s' begin='%f' repeatCount='indefinite' path='M",b);


		for(int k = 90; k<100;k++){
			printf("%d,%d ",Ax[k],Ay[k]);
		}
		
		printf("z'></animateMotion></circle>");
		b = b + 0.1;
	}

	printf("<text x='10' y='100'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>");

	return 0;
}
