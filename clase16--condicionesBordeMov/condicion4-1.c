#include<stdio.h>
#include<stdlib.h>

#include<time.h>


int main () {
	// valores rgb

	srand(time(NULL));

	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
	
	

	for(int i=0;i<44;i++) {

		int value = rand()%2;
		
		int r,g,b,radio;
		r = rand()%256;
		g = rand()%256;
		b = rand()%256;
	
		radio = rand()%15 + 5;


		float x,y;

		scanf("%f %f",&x,&y);
	
	

	
		if (value != 1){
		
			printf("<circle cx='%f' cy='%f' r='%d' fill='rgb(%d,%d,%d)'></circle>\n",x,y,radio,r,g,b);
		} else {
	
			printf("<circle cx='%f' cy='%f' r='%d' fill='rgb(%d,%d,%d)'></circle>\n",x,y,radio,r,g,b);
	
		}	
	
	}
	printf("<text x='10' y='10'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>\n");

	return 0;
}
