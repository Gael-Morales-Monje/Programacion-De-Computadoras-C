#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main () {
	
	srand(time(NULL));


	char palabra[50];

	
	scanf("%s",palabra);
	
	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>");
	
	printf("<a href='https://google.com/search?q=%s'>\n",palabra);
	printf("<circle cx='500' cy='500' r='150' fill='rgb(%d,%d,%d)'></circle>",rand()%256,rand()%256,rand()%256);
	printf("<text x='500' y='500' font-size='22'>%s</text>\n",palabra);
	printf("</a>");
	printf("<text x='100' y='50'>Gael Morales Monje, 2216044x</text>");
	printf("</svg>");
	




	



	return 0;
}
