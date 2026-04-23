#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



int main () {
	
	srand(time(NULL));

	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");
	
	for(int i = 0; i<66 ; i++) {
		char Nombre[30]; 	
			
		scanf("%s",Nombre);
		
		int n;
		scanf("%d",&n);
		float x[n], y[n];
		for (int k = 0; k<n; k++) {
			scanf("%f %f",&x[k],&y[k]);
		}
		printf("<g opacity='0.5'>\n");		
		printf("<a href='https://google.com/search?q=%s'>",Nombre);
		
		printf("<polygon stroke='black' stroke-width='1' fill='rgb(%d,%d,%d)' points='",rand()%256,rand()%256,rand()%256);
		for(int i = 0; i < n; i++) {
			printf("%f,%f ",x[i],y[i]);
		}
		printf("'/>\n");
	
		float xprom = 0,yprom = 0;  

		for(int k = 0; k< n; k++){
			xprom += x[k];
			yprom += y[k];
		} 
		xprom/=n;
		yprom/=n;
		printf("<text x='%f' y='%f' font-size='5' text-anchor='middle'>%s</text>",xprom,yprom, Nombre);
	
		printf("</a>\n</g>\n");

	
		printf("<g opacity='1'>");
		printf("<a href='https://google.com/search?q=%s'>",Nombre);
		
		printf("<polygon stroke='black' stroke-width='1' fill='rgb(%d,%d,%d)' points='",rand()%256,rand()%256,rand()%256);
		float xOrigen = 0,yOrigen = 0; 
		for (int k = 0; k < n; k ++) {
			xOrigen += x[k]-xprom;
			yOrigen += y[k]-yprom;
			printf("%f,%f ",x[k]-xprom,y[k]-yprom);
		}
		xOrigen/=n;
		yOrigen/=n;
		printf("'/>\n");
		
		printf("<text x='%f' y='%f' font-size='5' text-anchor='middle'>%s</text>",xOrigen,yOrigen, Nombre);
		
		

		printf("</a>\n");
		printf("<animateMotion dur='15s' repeatCount='indefinite' path='M ");
		for(int z = 0 ; z < 6; z++ ){
			printf("%d,%d ",rand()%1001,rand()%1001);
		}

		printf("'></animateMotion>\n");
		printf("</g>\n");
	
	}

		
	printf("</svg>");

	


	
	return	0;
}
