#include<stdio.h>



int main() {

	float width =20;
       
	float height=20;

	printf("<svg width='%f' height='%f' xmlns='http://www.w3.org/2000/svg'>\n",width*35.8,height*35.8);
	
	for(int i=1; i<=44;i++){
		float x,y;
		scanf("%f %f\n",&x,&y);
 		printf("<circle cx='%f' cy='%f' r='10' fill='red' color='black'></circle>",x,y);
		printf("<text x='%f' y='%f' font-size='7'>(%.2f , %.2f)</text>",x,y,x,y);

	}

	printf("<text x='20' y='20'>Gael Morales Monje, 2216044x</text>");

	printf("</svg>\n");

	return 0 ;
}
