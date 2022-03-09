#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, i ,j;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	int vet[x][y];
	
	
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			vet[i][j] = 0;
		}
	}
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			printf("%i %i ",i,j, vet[i][j]);
		}
		printf("\n");
	}
	
return 0;	

	 
}
