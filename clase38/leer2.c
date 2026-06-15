#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ImprimirarregloInverso(int Arr[], int i);

int main(int argc,char *argv[]) {
	
	srand(time(NULL));

	FILE *ap = fopen(argv[1],"r");

	int Values[500];
	int i = 0;
	while (fscanf(ap,"%d",&Values[i]) == 1){

	//	printf("%d ", Values[49-i]);
		i++;
	}


	fclose(ap);


	ImprimirarregloInverso(Values, i);


	return 0;
}
void ImprimirarregloInverso(int Arr[], int i){
	FILE *ap2 = fopen("arregloINV.txt","w");

	for (int j = i-1; j >= 0 ; j--) {
		printf("%d ",Arr[j]);
		fprintf(ap2,"%d ",Arr[j]);
	}
	


	fclose(ap2);



}
