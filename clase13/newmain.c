#include<stdio.h>



int main() {

	float width =20;
       
	float height=20;

	printf("<svg width='%f' height='%f' xmlns='http://www.w3.org/2000/svg'>\n",width*35.8,height*35.8);

	for(int i=0; i<44;i++){
		float x,y;
		scanf("%f %f\n",&x,&y);
 		printf("<circle cx='%f' cy='%f' r='10' fill='black'></circle>",x,y);	
	}


 	//printf("<circle cx='%f' cy='%f' r='10' fill='black'>",x,y);	
	printf("<text x='99' y='200'>Gael Morales Monje, 2216044x</text>");

	printf("</svg>\n");

	return 0 ;
}
