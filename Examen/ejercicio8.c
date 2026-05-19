#include<stdio.h>




int main() {

	int h;
	scanf("%d",&h);
	
	if (h % 2 == 0){

		for (int i = 0; i<=h; i++){
			for (int k = 0;k < i ;k++){
				printf("*");	
			}

			for (int k =i ; k<=h+3; k++){
				printf("/");
			
			
			}

			printf("\n");
		}

//		for(int i = 0; i <= h; i--){
//			for (int k = h; k>=0 ; k--){
//				printf("*");
			
//			}
//			printf("\n");
//		
//		}

	} else if (h % 2==1) {
		
		for (int i = 0; i<=h; i++){
			for (int k = 0;k < i-1 ;k++){
				printf("*");	
			}
			printf("\n");
		}


	}


// Gael Morales Monje
//
// se me complico la estructura 


	return 0;
}
  

