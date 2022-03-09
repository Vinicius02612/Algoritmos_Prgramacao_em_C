#include <stdio.h>
#include <stdlib.h>

void main(){
	int x, i ,j,y;
	
	scanf("%d",&x);
	scanf("%d",&y);
	

	for(i = 0; i < x; i++){ // coluna
	printf("\t");
		 for( j  = 0; j < y; j++ ){ //linha
	
		 	if((i == 0 )||(i == x-1)){
		 		printf(" *");
			 }else{
			 	if((j == 0)|| (j == x -1)){
			 			printf(" *");
				 }else{
				 		printf("   ");
				 }
			 }
		 }	
		
		printf("\n");
	}
	
}
