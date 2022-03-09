#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void guesses();
int main(){
	int x, res;
	printf("Eu tenho um numero entre 1 e 1000 \n");
	printf("Quer advinhar ? \n");
	printf("Faca seu palpite \n");
 	guesses();
 	
	return 0;
}

void guesses(){
	int n, i =1,  tentativas = 0,x ;
	srand(time(NULL));
	n = rand() % 1000 + 1;

	do{
		scanf("%d", &x);
		if(x < n){
			printf("Muito baixo: tente novamente \n");
		}
		if(x > n){
			printf("Muito Alto: tente novamente \n");
		}else if( x == n){
			printf("Exelente voce adivinhou o numero!! \n");
		}
		
		tentativas++;
	}while(x != n);
	printf("Tentativas: %d \n", tentativas );
	
	return 0;
}
