#include<stdio.h>




int main() {
	
	char Name[100]; scanf("%s",Name);
	
	FILE *fp;

	fp = fopen(Name,"w");


	for (int i = 1; i<=10;i++ ){
		fprintf(fp,"%d ",i);
	}


	fclose(fp);



	return 0;
}
