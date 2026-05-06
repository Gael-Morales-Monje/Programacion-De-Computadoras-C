#include<stdio.h>

void operacionesArray(int a, int b, float Op[5]);

int main () {
	int a,b; float Op[5];

	scanf("%d %d",&a,&b);

	operacionesArray(a,b,Op);

	for (int i = 0; i< 5; i++) {
		printf("%.3f\n",Op[i]);
	}


	return	0;
}



void operacionesArray(int a, int b, float Op[5]){
	Op[0] = a+b;
	Op[1] = a-b;
	Op[2] = a*b;
	Op[3] = a/b;
	Op[4] = a%b;

}
