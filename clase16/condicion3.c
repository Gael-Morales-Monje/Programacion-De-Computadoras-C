#include<stdio.h>
#include<stdlib.h>

#include<time.h>


int main () {
	

	srand(time(NULL));

	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
	
	for(int i=0;i<44;i++) {

		int value = rand()%2;

		float x,y;

		scanf("%f %f",&x,&y);
	
	

	
		if (value != 1){
		
			printf("<circle cx='%f' cy='%f' r='15' fill='green'></circle>\n",x,y);
		} else {
	
			printf("<circle cx='%f' cy='%f' r='15' fill='red'></circle>\n",x,y);
	
		}	
	
	}
	printf("<text x='10' y='10'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>\n");

	return 0;
}
