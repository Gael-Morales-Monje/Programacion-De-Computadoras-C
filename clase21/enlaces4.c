#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main () {
	
	srand(time(NULL));
	



	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>");
	//for(int i= 0;i < 2; i++ ){
		int x[5], y[5];
		int i ;
		for (i = 0; i<3;i++){
			scanf("%d,%d",&x[i],&y[i]);
		}


		char palabra[50];
		scanf("%s",palabra);


		printf("<g opacity='0.5'>");
		printf("<a href='https://google.com/search?q=%s'>\n",palabra);
		printf("<polygon fill='rgb(%d,%d,%d)' stroke='lime' stroke-width='4' points='",rand()%256,rand()%256,rand()%256);
		for (i = 0; i<3 ; i++) {
			printf("%d,%d ",x[i],y[i]);
		}
		printf("'></polygon>\n");
		printf("<text x='%d' y='%d' font-size='22' text-anchor='middle'>%s</text>\n",(x[0]+x[1]+x[2])/3,(y[0]+y[1]+y[2])/3,palabra);
		printf("</a>");
		printf("</g>");

		printf("<g opacity='1'>");
		printf("<a href='https://google.com/search?q=%s'>\n",palabra);
		printf("<polygon fill='rgb(%d,%d,%d)' stroke='lime' stroke-width='4' points='",rand()%256,rand()%256,rand()%256);
		for (i = 0; i<3 ; i++) {
			printf("%d,%d ",x[i],y[i]);
		}
		printf("'></polygon>\n");
		printf("<text x='%d' y='%d' font-size='22' text-anchor='middle'>%s</text>\n",(x[0]+x[1]+x[2])/3,(y[0]+y[1]+y[2])/3,palabra);
		printf("</a>");


		printf("<animateMotion dur='10s' repeatCount='indefinite' path='M");

		for(int i = 0; i<3; i++){
			printf("%d,%d ",x[i],y[i]);
		}
		printf("z'></animateMotion>");
		printf("<animateTransform >")


		printf("</g>");
	//}
	printf("<text x='100' y='50'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>");
	
	return 0;
}
