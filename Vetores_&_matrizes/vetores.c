#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int main(){
	int i, n, j, maior;
	int vet[MAX]; //declara um vetor de 5 posições
	
	//preechendo o vetor de 5 posições 

	for(i = 1;i<MAX;i++){
		scanf("%d ", &vet[i]);
	}
	
	
	maior = vet[0];
	for( j  = 1;j<MAX;j++){
		if( vet[j] > maior){
			maior = vet[j];
		}
	}
	printf("Maior valor digatado: \n %d", maior);
	
	return 0;
}
