#include <stdio.h>
#include <stdlib.h>

//Crie um programa que copie para um vetor os elementos de outro em ordem crescente.
// A ideia aqui é encontrar o menor elemento do vetor 1 e colocar no vetor 2. Tirar este número de vet1, por exemplo,
// colocando no seu lugar, no vetor 1, um número grande e recomeçar a busca pelo novo número menor.
#define MAX 5

int main(){
	int i,vet1[MAX], vetOrdenado[MAX];
	int poseMaior,poseMenor;
	
	//lendo os valores...
	for(i = 0; i < MAX; i++){
		scanf("%d", &vet1[i]);
	}
	
	//pegando a maior posição do vetor...
	poseMaior =  0;
	for(i = 0; i < MAX; i++){
		if(vet1[i] > vet1[poseMaior]){
			poseMaior = i;
		}
	}
	
	int j;
		poseMenor = 0;
	for( j = 0; j < MAX; j++){
	
		for(i = 0; i < MAX; i++){
			if(vet1[i]< vet1[poseMenor]){
				poseMenor = i; // pegar a menor posição do vetor...
			}
			vetOrdenado[j] = vet1[poseMenor]; // copia menor para o novo vetor....
			
			vet1[poseMenor] = vet1[poseMaior]; //no caso o maior do vetor...
		}
	}
	
	
	for(i = 0; i < MAX; i++){
		printf("%d \n", vetOrdenado[i]);
	}
}
