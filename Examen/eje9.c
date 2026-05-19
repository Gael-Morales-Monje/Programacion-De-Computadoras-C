#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	

	srand(time(NULL));



	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>");
	
	
	int y = 50;
	int y2 = 100;
	for (int i = 1;i<=10; i++){
		if (i % 2 == 0) {
			
			for(int i = 50; i < 1000; i= i+100){
				printf("<circle cx='%d' cy='%d' r='50' fill='rgb(%d,%d,%d)'/>\n",i,y,rand()%256,rand()%256,rand()%256);
				printf("<circle cx='%d' cy='%d' r='25' fill='rgb(%d,%d,%d)'/>\n",i,y,rand()%256,rand()%256,rand()%256);

				printf("<circle cx='%d' cy='%d' r='12.5' fill='rgb(%d,%d,%d)'/>\n",i,y,rand()%256,rand()%256,rand()%256);
			}
			y+=200;
		} else {

			for(int i = 50; i<1000; i+=100 ) {
			printf("<polygon fill='rgb(%d,%d,%d)' stroke='blue' stroke-width='1' points='",rand()%256,rand()%256,rand()%256);
				printf("%d,%d %d,%d %d,%d",i,y2,i-50,y2+100,i+50,y2+100);
				printf("'/>\n");
			}
			y2+=200;
			

		}
		
	}



	printf("</svg>");
	

/////Gael Morales Monje 
///
///no supe plasmarlo en codigo, me quede sin tiempo


	return 0;
}



