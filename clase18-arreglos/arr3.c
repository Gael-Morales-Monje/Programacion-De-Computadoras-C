#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {
	srand(time(NULL));
	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");

	printf("<circle r='15' fill='rgb(%d,%d,%d)'>",rand()%256,rand()%256,rand()%256);
	printf("<animateMotion dur='10s' begin='0' repeatCount='indefinite' path='M");

	int Ax[100],Ay[100];
	
	for(int i = 0;i<100;i++){
		Ax[i] = rand()%800 + 100;
		Ay[i] = rand()%400 + 500;
	}

	for(int k = 0; k<100;k++){
		printf("%d,%d ",Ax[k],Ay[k]);
		
	}
	
	printf("z'></animateMotion></circle>");
	printf("<text x='10' y='100'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>");

	return 0;
}
