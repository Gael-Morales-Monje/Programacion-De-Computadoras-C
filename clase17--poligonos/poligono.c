#include<stdio.h>



int main() {
	//int np;
	//scanf("%d",&np);
	//lee el numero de lados del poligono
	
		int np;
		scanf("%d",&np);
		
		for(int i=0; i< np;i ++){
			float x,y;
			scanf("%f %f",&x,&y);
			printf("%f %f\n",x,y);
		}

	return 0;
}
