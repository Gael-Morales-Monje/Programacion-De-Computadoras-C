#include<stdio.h>
#include<stdlib.h>

#include<time.h>


int main () {
	

	srand(time(NULL));

	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
	int value = rand()%2;


	if (value != 1){
		
		printf("<circle cx='500' cy='500' r='250' fill='green'></circle>\n");
	} else {
	
		printf("<circle cx='500' cy='500' r='250' fill='red'></circle>\n");
	
	}	

	printf("</svg>\n");

	return 0;
}
