#include <stdio.h>
#include <stdlib.h>

int main(){

	int vet[4], i;
	
	for(i  = 0; i < 4; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < 4; i++){
		if(vet[i] % 2 == 0){
			printf("%d", vet[i]);
		}
	
	}
	
}
