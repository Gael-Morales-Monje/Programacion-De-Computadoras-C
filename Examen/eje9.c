#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	

	srand(time(NULL));



	printf("<svg width='1000' height='1000' xmls='https://www.w3.org/2000/svg'>");
	
	
	for (int i = 1;i<=10; i++){
	
		if (i % 2 == 0) {
			
			for(i = 50; i < 1000; i= i+100){
			
			
				printf("<circle cx='%d' cy='50' r='50' fill='rgb(%d,%d,%d)'/>",i,rand()%256,rand()%256,rand()%256);
				printf("<circle cx='%d' cy='50' r='25' fill='rgb(%d,%d,%d)'/>",i,rand()%256,rand()%256,rand()%256);

				printf("<circle cx='%d' cy='50' r='12.5' fill='rgb(%d,%d,%d)'/>",i,rand()%256,rand()%256,rand()%256);


			}

		if (i % 2 == 1){
		
			printf("<polygon points='100 50'>");	
				
		
		
		
		
		}

		}
		
	}



	printf("</svg>");
	

/////Gael Morales Monje 
///
///no supe plasmarlo en codigo, me quede sin tiempo


	return 0;
}



