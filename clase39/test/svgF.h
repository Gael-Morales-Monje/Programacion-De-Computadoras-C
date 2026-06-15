void IniciarSVG(FILE *fp );
void TerminarSVG(FILE *fp );


void DibujarCirculo(FILE *fp,int cx, int cy, int R,int r, int g, int b);


void DibujarCirculo(FILE *fp,int cx, int cy, int R,int r, int g, int b){
	fprintf(fp,"<circle cx='%d' cy='%d' r='%d' fill='rgb(%d,%d,%d)'></circle>",cx,cy,R,r,g,b);

}





void TerminarSVG(FILE *fp ){
	fprintf(fp,"<text x='10' y='10'>Gael Morales Monje, 2216044x</text></svg>\n");
	

}

void IniciarSVG(FILE *fp ){

	fprintf(fp,"<svg width='1000' height='1000' xmlns='http://www.w3.org/2000/svg'>\n");


}
