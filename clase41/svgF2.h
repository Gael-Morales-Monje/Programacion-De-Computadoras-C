void IniciarSVG(FILE *fp );
void IniciarS();
void TerminarSVG(FILE *fp );
void TerminarS();
void DibujarCirculo(FILE *fp,int cx, int cy, int R,int r, int g, int b);


//void MovC(FILE *ap,struct punto ARR[100], int n ) ;


/*
void MovC(FILE *ap,struct punto ARR[100], int n ) {
	fprintf(ap,"<g>");
	DibujarCirculo(ap,0,0,10,rand()%256,rand()%256,rand()%256);
	fprintf(ap,"<animateMotion dur='20s' repeatCount='indefinite' path='M");
	for(int i = 0; i < n; i++) {
		fprintf(ap,"%d,%d ",ARR[i].x,ARR[i].y);	
	} 	
	fprintf(ap,"z'></animateMotion>\n");
	fprintf(ap,"</g>");
}
*/





	


void DibujarCirculo(FILE *fp,int cx, int cy, int R,int r, int g, int b){
	fprintf(fp,"<circle cx='%d' cy='%d' r='%d' fill='rgb(%d,%d,%d)'></circle>\n",cx,cy,R,r,g,b);

}





void TerminarSVG(FILE *fp ){
	fprintf(fp,"<text x='10' y='10'>Gael Morales Monje, 2216044x</text></svg>\n");
}
void TerminarS(){
	printf("<text x='10' y='10'>Gael Morales Monje, 2216044x</text></svg>\n");
}


void IniciarSVG(FILE *fp ){

	fprintf(fp,"<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");


}	
void IniciarS(){

	printf("<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");


}
