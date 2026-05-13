#include<stdio.h>

void ImprimirArreglo(int A[] ,int n,int i);

void funWhile(int j,int n ,int A[]);

void sumArr(int i, int n,int A[], int *sum, int *prod);

int main() {
	int n; scanf("%d",&n);

	int A[n];

	int j = 0;
	
	funWhile(j,n,A);

	int i = 0;
	ImprimirArreglo(A,n,i);
	putchar('\n');
	
	/*
	int Total = 0;
	for (int i = 0; i<n; i++) {
		Total = Total + A[i];
	}
*/	int k = 0;
	int sum = 0;
	int prod = 1;
	sumArr(k,n,A,&sum,&prod);

	printf("%d\n",sum);
	printf("%d\n",prod);
	return 0 ;
}
	
void sumArr(int i, int n,int A[],int *sum, int *prod){
	if (i < n) {
		*sum = *sum + A[i];
		*prod = *prod * A[i];
		i++;
		sumArr(i,n,A,sum,prod);
	}
}





void ImprimirArreglo(int A[] ,int n,int i){
	if(i < n){
		printf("%d",A[i]);
		i++;
		ImprimirArreglo(A,n,i);
	}
}
void funWhile(int j,int n ,int A[]){
	if (j< n) {
		scanf("%d",&A[j]);
		j++;
		funWhile(j,n,A);
	}

}
