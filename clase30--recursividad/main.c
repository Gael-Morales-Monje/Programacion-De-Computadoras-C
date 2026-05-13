#include<stdio.h>



void miForRecursivo(int i);


int main() {
	int i = 0 ;
	miForRecursivo(i);
	
	return 0;

}
void miForRecursivo(int i){
	if(i < 10){
		printf("%d ",i);
		i++;
		miForRecursivo(i);
	}
}
